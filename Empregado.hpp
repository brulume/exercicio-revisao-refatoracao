#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {

  public:
    std::string nome;
    double salarioHora;

    /* Calcula hora extra adicionando 50% caso sejam maiores que 8 h.
     * \return pagamento do mes atualizado com horas extras
     */
    double pagamentoMes(double horasTrabalhadas);
    
};

#endif