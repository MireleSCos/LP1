#pragma once
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
private:
    /* data */
public:
    TrabalhadorPorHora(/* args */);
    TrabalhadorPorHora(string n, float v);
    ~TrabalhadorPorHora();

    float calcularPagamentoSemanal(int horasSemanais);
    
    float valorHora;
};

