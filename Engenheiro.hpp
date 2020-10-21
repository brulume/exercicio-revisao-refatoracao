#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    int _projetos;

  public:
    int getProjetos();
    void setProjetos(const int& projetos);

};