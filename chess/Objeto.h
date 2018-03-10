#pragma once
#include <string>
#include<sstream>
#include <basetyps.h> // clase permite saber nombre de clase actual
using namespace std;

class Objeto {
protected:
	Objeto(void);
public:
	virtual string toString() const;	
	virtual bool equal(Objeto*) const;
	virtual string getType() const;
};