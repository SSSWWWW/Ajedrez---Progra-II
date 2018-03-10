#pragma once
#include "Matriz.h"
#include "Puntos.h"
#include "peon.h"
#include "torre.h"
#include "alfil.h"
#include "reina.h"
#include "rey.h"
#include "Caballo.h"
#include "Serializable.h"
#include "ConjuntoClientes.h"

class tablero : public Objeto , public peon, public torre , public caballo , public alfil ,  public virtual Serializable {
private:
	Matriz<Puntos*>* tab;	
public:
	tablero(int, int);
	tablero(ifstream&, ConjuntoClientes);
	virtual ~tablero();
	virtual void agregar(int, int, Puntos*);
	virtual int  asientosOcupados() const;
	virtual void limpiar();
	virtual bool asientoOcupados(int,int) const;
	virtual void serializar(ofstream&) const;
	virtual bool puedeMoverseTorre(int, int , int , int);
	virtual bool puedeMoverseCaballo(int, int);


};

