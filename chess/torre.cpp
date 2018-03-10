#include "torre.h"

#include<string>
#include<iostream>

torre::torre(void)
{

	_torre = " " ;



}

 void torre::setFila(std::string fp) {

	 filaTorre = fp;

}
 void torre::setColumna(std::string cp) {
 
	 columnaTorre = cp;
 
 }

 
 std::string torre::getFila() const {
 
	 return filaTorre;
 
 }

 std::string torre::getColumna() const {
 
	 return columnaTorre;
 
 }


torre::~torre(void)
{
}

std::string torre::toString(){

	return _torre;



}
