#pragma once 
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    private:
        /* data */
    protected:
        float salario;
    public:
        Assalariado(/* args */);
        Assalariado(string,int,float);
        ~Assalariado();

        float getSalario();
        void setSalario(float);

        float calcularSalario();
};

