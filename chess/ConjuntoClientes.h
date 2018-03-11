#pragma once
#include "ListaSerializable.h"
#include "Puntos.h"
#include "Objeto.h"
#include "Serializable.h"

class ConjuntoClientes : public Objeto, public virtual Serializable {
private:
	ListaSerializable<Puntos*>* personas;
public:
	ConjuntoClientes();
	ConjuntoClientes(ifstream&);
	virtual ~ConjuntoClientes();
	virtual void agregar(string, string);
	
	virtual void serializar(ofstream&) const;
};

