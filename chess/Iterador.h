#pragma once
#include "Objeto.h"

template<class T>
class Iterador {
public:
	virtual bool hashNext() const = 0;
	virtual T next() = 0;
};

