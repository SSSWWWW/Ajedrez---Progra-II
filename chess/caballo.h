#pragma once


#include<string>
#include<iostream>

class caballo
{
public:


	caballo(void);
	~caballo(void);

	virtual void setFila(std::string);
	virtual void setColumna(std::string);

	virtual std::string getFila() const;
	virtual std::string getColumna() const;

  virtual std::string toString();




protected:

	
	std::string _caballo;
	std::string filaCaballo;
	std::string columnaCaballo;
	


};
