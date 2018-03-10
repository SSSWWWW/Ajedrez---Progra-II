#pragma once


#include<string>
#include<iostream>

class peon 
{
public:


	peon(void);
	~peon(void);

	virtual void setFila(std::string);
	virtual void setColumna(std::string);

	virtual std::string getFila() const;
	virtual std::string getColumna() const;

  virtual std::string toString();




protected:

	
	std::string _peon;
	std::string filaPeon;
	std::string columnaPeon;
	


};

