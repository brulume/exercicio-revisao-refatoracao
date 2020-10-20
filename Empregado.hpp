#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado {

  public:
    double salarioHora;  
    double quotaMensalVendas;  

    /* Calcula hora extra adicionando 50% caso sejam maiores que 8 h.
     * \return pagamento do mes atualizado com horas extras
     */
    double pagamentoMes(double horasTrabalhadas) {
      double t = horasTrabalhadas;
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
      return t * salarioHora;
    }

};

#endif