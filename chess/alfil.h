#include<string>
#include<iostream>

class alfil
{
public:


	alfil(void);
	~alfil(void);

	virtual void setFila(std::string);
	virtual void setColumna(std::string);

	virtual std::string getFila() const;
	virtual std::string getColumna() const;

  virtual std::string toString();




protected:

	
	std::string _alfil;
	std::string filaAlfil;
	std::string columnaAlfil;
	


};
