#include "ConjuntoClientes.h"
#include "Iterador.h"

ConjuntoClientes::ConjuntoClientes() {
	personas = new ListaSerializable<Puntos*>();
}

ConjuntoClientes::ConjuntoClientes(ifstream& in) {
	personas = new ListaSerializable<Puntos*>();
	int cantidad = SerializadorBinario::deserialize<int>(in);
	for (int i = 0; i < cantidad; i++) {
		personas->add(new Puntos(in));
	}
}

ConjuntoClientes::~ConjuntoClientes() {
	delete personas;
}

void ConjuntoClientes::agregar(string c, string n) {
	personas->add(new Puntos(c, n));
}


void ConjuntoClientes::serializar(ofstream& os) const {

}