#pragma once
#include "Lista.h"
#include "Serializable.h"

template<class T>
class ListaSerializable : public Lista<T>, public Serializable {
public:
	virtual void serializar(ofstream&) const;
};

template<class T>
void ListaSerializable<T>::serializar(ofstream& out) const {
	SerializadorBinario::serialize<int>(out, size());
	for (Iterador<T>* it = getIterador(); it->hashNext();) {
		T elemento = it->next();
		Serializable* objeto = dynamic_cast<Serializable*>(elemento);
		objeto->serializar(out);
	}
}