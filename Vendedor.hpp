#ifndef VENDEDOR_h
#define VENDEDOR_h

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    std::string nome;  	  
	
	double quotaTotalAnual();


	
};

#endif