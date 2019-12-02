#pragma once

#include <string>

class Despesa {
public:
    Despesa();
    Despesa(std::string t, double v);
    
    std::string getTipoDespesa();
    double getValor();
    void setTipoDespesa(std::string t);
    void setValor(double v);
    std::string toString();

private:
    std::string tipoDespesa;
    double valor;
};
