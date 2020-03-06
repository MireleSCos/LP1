#pragma once 

#include "ContaCorrente.h"

class ContaEspecial:public ContaCorrente
{
    private:
        /* data */
    public:
        ContaEspecial(/* args */);
        ContaEspecial(string , float , int ,float);
        ~ContaEspecial();
        int definirLimite();
};