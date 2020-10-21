#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {

  protected:
    std::string _nome;
    double _salarioHora;

  public:
    Empregado();
    Empregado (std::string nome, double salarioHora) : _nome(nome), _salarioHora(salarioHora) {};

    /* Calcula hora extra adicionando 50% caso sejam maiores que 8 h.
     * \return pagamento do mes atualizado com horas extras
     */
    double pagamentoMes(const double& horasTrabalhadas);

    std::string getNome();

    void setNome(const std::string& nome);

    double getSalarioHora();

    void setSalarioHora(const double& salarioHora);

};

#endif