#pragma once
#define NULL 0
#include "Objeto.h"

template<class T>
class Nodo {
private:
	Nodo* sig;
	T dato;
public:
	Nodo(T, Nodo* = NULL);
	virtual void setSiguiente(Nodo<T>*);
	virtual void setDato(T);
	virtual Nodo<T>* getSiguiente() const;
	virtual T getDato() const;
};

template<class T>
Nodo<T>::Nodo(T d, Nodo* s) {
	dato = d;
	sig = s;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* n) {
	sig = n;
}

template<class T>
void Nodo<T>::setDato(T d) {
	dato = d;
}

template<class T>
Nodo<T>* Nodo<T>::getSiguiente() const {
	return  sig;
}

template<class T>
T Nodo<T>::getDato() const {
	return dato;
}