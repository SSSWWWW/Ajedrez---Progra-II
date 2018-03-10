#pragma once
#include "Objeto.h"
#include <string>
using namespace std;

template<class T>
class IContenedor {
public:
	virtual string toString() const = 0;
	virtual void remove(int) = 0;
	virtual void clear() = 0;
	virtual void add(T) = 0;
	virtual int size() const = 0;
	virtual bool isEmpty() const = 0;
	virtual T get(int) const = 0;
};

