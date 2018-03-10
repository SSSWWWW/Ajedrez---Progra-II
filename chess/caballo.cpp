#include "caballo.h"

#include<string>
#include<iostream>

caballo::caballo(void)
{

	_caballo = " " ;



}

 void caballo::setFila(std::string fp) {

	 filaCaballo = fp;

}
 void caballo::setColumna(std::string cp) {
 
	 columnaCaballo = cp;
 
 }

 
 std::string caballo::getFila() const {
 
	 return filaCaballo;
 
 }

 std::string caballo::getColumna() const {
 
	 return columnaCaballo;
 
 }


caballo::~caballo(void)
{
}

std::string caballo::toString(){

	return _caballo;



}
