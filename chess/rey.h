#include<string>
#include<iostream>

class rey
{
public:


	rey(void);
	~rey(void);

	virtual void setFila(std::string);
	virtual void setColumna(std::string);

	virtual std::string getFila() const;
	virtual std::string getColumna() const;

  virtual std::string toString();




protected:

	
	std::string _rey;
	std::string filaRey;
	std::string columnaRey;
	


};
