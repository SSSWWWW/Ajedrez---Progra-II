#pragma once
#include <fstream>
#include "SerializadorBinario.h"
using namespace std;

class Serializable {
public:
	virtual void serializar(ofstream&) const = 0;
};
