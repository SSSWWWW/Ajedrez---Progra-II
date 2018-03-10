#include "reina.h"

#include<string>
#include<iostream>

reina::reina(void)
{

	_reina = " " ;



}

 void reina::setFila(std::string fp) {

	 filaReina = fp;

}
 void reina::setColumna(std::string cp) {
 
	 columnaReina = cp;
 
 }

 
 std::string reina::getFila() const {
 
	 return filaReina;
 
 }

 std::string reina::getColumna() const {
 
	 return columnaReina;
 
 }


reina::~reina(void)
{
}

std::string reina::toString(){

	return _reina;



}
