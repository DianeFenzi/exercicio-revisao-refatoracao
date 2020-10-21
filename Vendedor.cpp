#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"


double Vendedor::quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}