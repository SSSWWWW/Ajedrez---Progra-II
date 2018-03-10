#pragma once
#include "Iterador.h"
template<class T>
class Iterable {
public:
	virtual Iterador<T>* getIterador() const = 0;
};

