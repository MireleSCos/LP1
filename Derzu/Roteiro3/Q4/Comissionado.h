#pragma once 

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    private:
        /* data */
    protected:
        float vendasSemanais, percentualComissao,salarioBase;
    public:
        Comissionado(/* args */);
        Comissionado(string ,int, float, float, float);
        ~Comissionado();

        float calcularSalario();
};