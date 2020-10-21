#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
    double _quotaMensalVendas;

  public:
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) :
      Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas) {};
      
    double quotaTotalAnual();

    double getQuotaMensalVendas();
    void setQuotaMensalVendas(const double& quotaMensalVendas);

};