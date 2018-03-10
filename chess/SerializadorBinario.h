/*
Autor: Steven Brenes Chavarría
Email: sbrenesms@gmail.com
Universidad Nacional de Costa Rica
Licencia: GNU
*/

#pragma once
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class SerializadorBinario {
public:
	//
	// bloque de lectura de
	// datos primitivos
	template <class T>
	static T deserialize(ifstream& in) {
		string r;
		size_t n = 0;
		in.read((char*)&n, sizeof(size_t));

		char* c = new char[n];
		in.read(c, (std::streamsize)n);
		r = string(c);
		delete c;
		if (!in.good())
			throw - 1;
		//
		// Convertir a tipo T
		stringstream s;
		s << r;
		T destino;
		s >> destino;
		return destino;
	}

	template <class T>
	static bool serialize(ofstream& out, const T& d) {
		stringstream ss;
		ss << d;
		string s = ss.str();
		bool r = true;
		// Primero, guarda la longitud de la hilera,
		// tomando en cuenta el caracter nulo de terminación.
		size_t n = s.length() + 1;
		out.write((char*)&n, sizeof(size_t));
		// Luego graba los caracteres componentes de la
		// hilera.
		out.write(s.c_str(), (std::streamsize)n);
		return out.good();
	}
};

