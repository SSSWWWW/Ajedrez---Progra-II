#include<string>
#include<iostream>

class reina
{
public:


	reina(void);
	~reina(void);

	virtual void setFila(std::string);
	virtual void setColumna(std::string);

	virtual std::string getFila() const;
	virtual std::string getColumna() const;

  virtual std::string toString();




protected:

	
	std::string _reina;
	std::string filaReina;
	std::string columnaReina;
	


};
