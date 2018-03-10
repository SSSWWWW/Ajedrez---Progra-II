#pragma once
#include "Iterador.h"
#include "Nodo.h"

template<class T>
class IteradorLista : public Iterador<T> {
private:
	Nodo<T>* root;
public:
	IteradorLista(Nodo<T>*);
	virtual bool hashNext() const;
	virtual T next();
};


template<class T>
IteradorLista<T>::IteradorLista(Nodo<T>* dummy) {
	root = dummy;
}

template<class T>
bool IteradorLista<T>::hashNext() const {
	return root != NULL;
}

template<class T>
T IteradorLista<T>::next() {
	T tmp = root->getDato();
	root = root->getSiguiente();
	return tmp;
}