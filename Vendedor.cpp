#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {
  return this->_quotaMensalVendas * 12;
}

double Vendedor::getQuotaMensalVendas() {
  return this->_quotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(const double& quotaMensalVendas) {
  this->_quotaMensalVendas = quotaMensalVendas;
}