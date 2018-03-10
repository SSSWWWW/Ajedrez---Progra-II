#pragma once


#include<string>
#include<iostream>

class torre 
{
public:


	torre(void);
	~torre(void);

	virtual void setFila(std::string);
	virtual void setColumna(std::string);

	virtual std::string getFila() const;
	virtual std::string getColumna() const;

  virtual std::string toString();




protected:

	
	std::string _torre;
	std::string filaTorre;
	std::string columnaTorre;
	


};
