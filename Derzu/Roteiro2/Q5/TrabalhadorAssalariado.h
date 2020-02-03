#pragma once
#include "Trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador
{
private:
    /* data */
public:
    TrabalhadorAssalariado(/* args */);
    TrabalhadorAssalariado(string n, float s);
    ~TrabalhadorAssalariado();

    float calcularPagamentoSemanal();
};


