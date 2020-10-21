#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {
  double t = horasTrabalhadas;
  if (horasTrabalhadas > 8) {
    double x = horasTrabalhadas - 8;
    t += x / 2;
  }
  return t * salarioHora;
}