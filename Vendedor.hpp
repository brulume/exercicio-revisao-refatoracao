#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
    double _quotaMensalVendas;

  public:
    double quotaTotalAnual();

    double getQuotaMensalVendas();
    void setQuotaMensalVendas(const double& quotaMensalVendas);

};