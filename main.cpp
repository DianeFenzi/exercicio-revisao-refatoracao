#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include "Empregado.hpp"

void printEngenheiro (Engenheiro eng, double pagamento) {
  std::cout << "Nome: " << eng.nome << std::endl;
  std::cout << "Salario Mes: " << eng.pagamentoMes(pagamento) << std::endl;
  std::cout << "Projetos: " << eng.projetos << std::endl;
  std::cout << std::endl;
}

void printVendedor (Vendedor vend, double pagamento) {
  std::cout << "Nome: " << vend.nome << std::endl;
  std::cout << "Salario Mes: " << vend.pagamentoMes(pagamento) << std::endl;  
  std::cout << "Quota vendas: " << vend.quotaTotalAnual() << std::endl;
}





int main() {

  Engenheiro eng1;
  eng1.nome = "Joao Snow";
  eng1.salarioHora = 35;
  eng1.projetos = 3;
  double pagamento = 9.5;
  printEngenheiro(eng1, pagamento);
  
  Engenheiro eng2;
  eng2.nome = "Daniela Targaryen";
  eng2.salarioHora = 30;
  eng2.projetos = 1; 
  pagamento = 8;
  printEngenheiro(eng2, pagamento);
  
  Engenheiro eng3;
  eng3.nome = "Bruno Stark";
  eng3.salarioHora = 30;
  eng3.projetos = 2; 
  pagamento = 8;
  printEngenheiro(eng3, pagamento);
  
  
  Vendedor vend1;
  vend1.nome = "Tonho Lannister";
  vend1.salarioHora = 20;
  vend1.quotaMensalVendas = 5000;
  pagamento = 6;
  printVendedor (vend1, pagamento);
  std::cout << std::endl;
  
  
  Vendedor vend2;
  vend2.nome = "Jose Mormont";
  vend2.salarioHora = 25;
  vend2.quotaMensalVendas = 3000;
  pagamento = 8;
  printVendedor (vend2, pagamento);
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.nome = "Sonia Stark";
  vend3.salarioHora = 30;
  vend3.quotaMensalVendas = 4000;
  pagamento = 8;
  printVendedor (vend3, pagamento);
    
  
  return 0;	
}