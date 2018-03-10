#pragma once
#include <sstream>
#include "Objeto.h"
#include "IContenedor.h"

template<class T>
class Vector : public IContenedor<T> {
private:
	int tamaño;
	int cantidad;
	T* vector;
public:
	Vector(int);
	virtual ~Vector(void);
	virtual T operator[](int);
	virtual string toString() const ;
	virtual void remove(int);
	virtual void clear();
	virtual void add(T);
	virtual void add(T, int);
	virtual int size() const;
	virtual int count() const;
	virtual bool isEmpty() const;
	virtual T get(int) const;
};

template<class T>
T Vector<T>::operator[](int pos) {
	return get(pos);
}

template<class T>
Vector<T>::Vector(int t) {
	vector = new T[tamaño = t];
	cantidad = 0;
	for (int i = 0; i < tamaño; i++) {
		vector[i] = NULL;
	}
}

template<class T>
Vector<T>::~Vector(void) {
	clear();
}

template<class T>
int Vector<T>::size() const {
	return tamaño;
}

template<class T>
int Vector<T>::count() const {
	return cantidad;
}

template<class T>
bool Vector<T>::isEmpty() const {
	return count() == 0;
}

template<class T>
T Vector<T>::get(int p) const {
	return vector[p];
}

template<class T>
void Vector<T>::add(T dato) {
	for (int i = 0; i < size(); i++) {
		if (!vector[i]) {
			vector[i] = dato;
			cantidad++;
			return;
		}
	}
}

template<class T>
void Vector<T>::add(T dato, int pos) {
	if (!vector[pos]) {
		cantidad++;
	}
	vector[pos] = dato;
}

template<class T>
void Vector<T>::clear() {
	for (int i = 0; i < size(); i++) {
		remove(i);
	}
}

template<class T>
void Vector<T>::remove(int p) {
	if (!vector[p]) {
		//delete vector[p];
		vector[p] = NULL;
		cantidad--;
	}

}

template<class T>
string Vector<T>::toString() const {
	stringstream r;
	r << "[";
	for (int i = 0; i < size(); i++) {
		if (vector[i]) {
			r << get(i)->toString();
		}
		else {
			r << "null";
		}
		if (i + 1 != size()) {
			r << ",";
		}
	}
	r << "]";
	return r.str();
}

