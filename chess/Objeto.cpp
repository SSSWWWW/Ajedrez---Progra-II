#include "Objeto.h"
#include <sstream>

Objeto::Objeto(void) {
}

string Objeto::toString() const{ 
	stringstream r;
	r << typeid(*this).name();
	r << "@" << this; // nombre de la clase
	return r.str();
}

bool Objeto::equal(Objeto* obj) const {
	return this == obj;
}

string Objeto::getType() const {
	return typeid(*this).name(); // nombre de la clase
}