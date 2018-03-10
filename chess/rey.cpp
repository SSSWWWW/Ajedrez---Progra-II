#include "rey.h"

#include<string>
#include<iostream>

rey::rey(void)
{

	_rey = " " ;



}

 void rey::setFila(std::string fp) {

	 filaRey = fp;

}
 void rey::setColumna(std::string cp) {
 
	 columnaRey = cp;
 
 }

 
 std::string rey::getFila() const {
 
	 return filaRey;
 
 }

 std::string rey::getColumna() const {
 
	 return columnaRey;
 
 }


rey::~rey(void)
{
}

std::string rey::toString(){

	return _rey;



}
