#pragma once 
#include "Conta.h"

class ContaPoupanca : public Conta
{
private:
    /* data */

protected:
    int variacao;
    float taxaRedimento;
public:
    ContaPoupanca(/* args */);
    ContaPoupanca(string , float , int ,int);
    ~ContaPoupanca();

    int getVariacao();
    float getTaxaRe();

    void setVariacao(int);
    void setTaxa(float);

    float render();
};
