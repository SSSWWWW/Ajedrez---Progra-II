#include "Puntos.h"

Puntos::Puntos(string c, string n) {
	fila = n;
	columna = c;
}

Puntos::Puntos(ifstream& in) {
	fila = SerializadorBinario::deserialize<string>(in);
	columna = SerializadorBinario::deserialize<string>(in);
}

 

string Puntos::toString() const {
	return  fila  + columna ;
}

void Puntos::serializar(ofstream& out) const {
	SerializadorBinario::serialize<string>(out, fila);
	SerializadorBinario::serialize<string>(out, columna);
}

void Puntos::setPuntos(string f, string c) {

	fila = f;
	columna = c;

}


void Puntos::setFila(string fil) {

	fila = fil;


}

void Puntos::setColumna(string col) {

	columna = col;

}

string Puntos::getFila() const {

	return fila;

}
string Puntos::getColumna() const {

	return columna;

}