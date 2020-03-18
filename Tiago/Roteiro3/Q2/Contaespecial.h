#pragma once
#include "Conta.h"

class Contaespecial : public Conta
{
    private:
        /* data */
    public:
        Contaespecial(/* args */);
        Contaespecial(string nome, float salario, float saldo, int numero);
        ~Contaespecial();

        void definirLimite();
};


