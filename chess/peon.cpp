#include "peon.h"

#include<string>
#include<iostream>

peon::peon(void)
{

	_peon = " " ;



}

 void peon::setFila(std::string fp) {

	 filaPeon = fp;

}
 void peon::setColumna(std::string cp) {
 
	 columnaPeon = cp;
 
 }

 
 std::string peon::getFila() const {
 
	 return filaPeon;
 
 }

 std::string peon::getColumna() const {
 
	 return columnaPeon;
 
 }


peon::~peon(void)
{
}

std::string peon::toString(){

	return _peon;



}
