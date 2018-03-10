#pragma once
#include "objeto.h"
#include "Serializable.h"



class Puntos : public Objeto, public Serializable {
private:
	string fila;
	string columna;

public:
	Puntos(string = " " , string= " ");
	Puntos(ifstream&);

	virtual void setFila(string);
	virtual void setColumna(string);

	virtual string getFila() const;
	virtual string getColumna() const;

	virtual void setPuntos(string , string);
	
	
	virtual string toString() const;
	virtual void serializar(ofstream&) const;
};

