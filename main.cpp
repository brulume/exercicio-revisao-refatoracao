#include <iostream>
#include <vector>

#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void printEmpregado(Empregado& emp, double horasTrabalhadas) {
  std::cout << "Nome: " << emp.getNome() << std::endl;
  std::cout << "Salario Mes: " << emp.pagamentoMes(horasTrabalhadas) << std::endl;
}

void printEngenheiro(Engenheiro& eng, double horasTrabalhadas) {
  printEmpregado(eng, horasTrabalhadas);
  std::cout << "Projetos: " << eng.getProjetos() << std::endl;
  std::cout << std::endl;
}

void printVendedor(Vendedor& vend, double horasTrabalhadas) {
  printEmpregado(vend, horasTrabalhadas);
  std::cout << "Quota vendas: " << vend.quotaTotalAnual() << std::endl;
  //std::cout << std::endl;
}

int main() {

  std::vector<Engenheiro> engenheiro;
  
  Engenheiro eng("Joao Snow", 35, 3);
  engenheiro.push_back(eng);
  printEngenheiro(engenheiro[0], 9.5);

  eng = Engenheiro("Daniela Targaryen", 30, 1);
  engenheiro.push_back(eng);
  printEngenheiro(engenheiro[1], 8);

  eng = Engenheiro("Bruno Stark", 30, 2);
  engenheiro.push_back(eng);
  printEngenheiro(engenheiro[2], 8);
  

  std::vector<Vendedor> vendedor;
  Vendedor vend("Tonho Lannister", 20, 5000);
  vendedor.push_back(vend);
  printVendedor(vendedor[0], 6);

  std::cout << std::endl;
  
  vend = Vendedor("Jose Mormont", 25, 3000);
  vendedor.push_back(vend);
  printVendedor(vendedor[1], 8);
  
  std::cout << std::endl;
	
  vend = Vendedor("Sonia Stark", 30, 4000);
  vendedor.push_back(vend);
  printVendedor(vendedor[2], 8);
  
  return 0;
}