#pragma once
#include "Objeto.h"
#include "Vector.h"

template<class T>
class Matriz : public Objeto {
private:
	int filas;
	int columnas;
	Vector<T>** matriz;
public:
	Matriz(int, int, T = NULL);
	virtual int cantidadFilas() const;
	virtual int cantidadColumnas() const;
	//
	virtual void setValor(int, int, T);
	virtual T getValor(int, int) const;
	virtual string toString() const;
};

template<class T>
Matriz<T>::Matriz(int f, int c, T d) {
	filas = f;
	columnas = c;
	matriz = new Vector<T>*[filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new Vector<T>(columnas);
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			matriz[i]->add(d, j);
		}
	}
}


template<class T>
int Matriz<T>::cantidadFilas() const {
	return filas;
}

template<class T>
int Matriz<T>::cantidadColumnas() const {
	return columnas;
}

template<class T>
void Matriz<T>::setValor(int x, int y, T d)  {
	matriz[x]->add(d, y);
}

template<class T>
T Matriz<T>::getValor(int x, int y) const {
	return (*matriz[x])[y] ;
}

template<class T>
string Matriz<T>::toString() const {
	stringstream r;
	r << "{";
	for (int i = 0; i < filas; i++) {
		r << matriz[i]->toString();
		if (i + 1 != filas) {
			r << ",";
		}
	}
	r << "}";
	return r.str();
}