#pragma once 

#include "Conta.h"

class ContaCorrente : public Conta
{
    private:
        /* data */

    protected:
        float salario;
        int limite;
    public:
        ContaCorrente();
        ContaCorrente(string , float , int ,float);
        ~ContaCorrente();

        float getSalario();
        int getLimite();

        void setSalario(float);
        void setLimite(int);
        virtual int definirLimite();
};


