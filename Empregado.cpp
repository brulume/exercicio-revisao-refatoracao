#include "Empregado.hpp"

double Empregado::pagamentoMes(const double& horasTrabalhadas) {
  double t = horasTrabalhadas;
  if (horasTrabalhadas > 8) {
    double x = horasTrabalhadas - 8;
    t += x / 2;
  }
  return t * this->getSalarioHora();
}

std::string Empregado::getNome() {
  return this->_nome;
}

void Empregado::setNome(const std::string& nome) {
  this->_nome = nome;
}

double Empregado::getSalarioHora() {
  return this->_salarioHora;
}

void Empregado::setSalarioHora(const double& salarioHora) {
  this->_salarioHora = salarioHora;
}