#pragma once
#include <sstream>
#include <string>
#include "Nodo.h"
#include "IContenedor.h"
#include "Iterable.h"
#include "IteradorLista.h"
using namespace std;

template<class T>
class Lista : public IContenedor<T>, public Iterable<T> {
private:
	Nodo<T>* root;
public:
	Lista(void);
	virtual ~Lista(void);
	virtual string toString() const;
	virtual void remove(int);	// tarea
	virtual void clear();
	virtual void add(T);
	virtual int size() const;
	virtual bool isEmpty() const;
	virtual T get(int) const;
	virtual Iterador<T>* getIterador() const;
private:
	virtual int size(Nodo<T>*, int) const;
	virtual Nodo<T>* remove(Nodo<T>*, int);
};


template<class T>
Lista<T>::Lista(void) {
	root = NULL;
}

template<class T>
Lista<T>::~Lista(void) {
	clear();
}

template<class T>
string Lista<T>::toString() const {
	stringstream r;
	r << "{";
	Nodo<T>* tmp = root;
	while (tmp) {

		r << tmp->getDato()->toString();
		if (tmp->getSiguiente()) {
			r << ",";
		}
		tmp = tmp->getSiguiente();
	}
	r << "}";
	return r.str();
}

template<class T>
void Lista<T>::remove(int p) {
	root = remove(root, p);
}

template<class T>
Nodo<T>* Lista<T>::remove(Nodo<T>* n, int p) {
	if (n) {
		if (p == 0) {
			return n->getSiguiente();
		}
		n->setSiguiente(remove(n->getSiguiente(), p - 1));
		return n;
	}
	return NULL;
}


template<class T>
T Lista<T>::get(int p) const {
	Nodo<T>* tmp = root;
	for (; tmp && p > 0; p--, tmp = tmp->getSiguiente());
	return tmp ? tmp->getDato() : NULL;
}

template<class T>
void Lista<T>::clear() {
	while (!isEmpty()) {
		remove(0);
	}
}

template<class T>
void Lista<T>::add(T d) {
	root = new Nodo<T>(d, root);
}

template<class T>
int Lista<T>::size() const {
	return size(root, 0);
}

template<class T>
int Lista<T>::size(Nodo<T>* t, int suma) const {
	return t ? size(t->getSiguiente(), suma + 1) : suma;
}

template<class T>
bool Lista<T>::isEmpty() const {
	return !root;
}

template<class T>
Iterador<T>* Lista<T>::getIterador() const {
	return new IteradorLista<T>(root);
}

