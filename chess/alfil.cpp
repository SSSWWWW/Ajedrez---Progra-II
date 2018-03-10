#include "alfil.h"

#include<string>
#include<iostream>

alfil::alfil(void)
{

	_alfil = " " ;



}

 void alfil::setFila(std::string fp) {

	 filaAlfil = fp;

}
 void alfil::setColumna(std::string cp) {
 
	 columnaAlfil = cp;
 
 }

 
 std::string alfil::getFila() const {
 
	 return filaAlfil;
 
 }

 std::string alfil::getColumna() const {
 
	 return columnaAlfil;
 
 }


alfil::~alfil(void)
{
}

std::string alfil::toString(){

	return _alfil;



}
