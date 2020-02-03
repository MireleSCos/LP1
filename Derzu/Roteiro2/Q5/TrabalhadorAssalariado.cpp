#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(/* args */) :Trabalhador()
{
}
TrabalhadorAssalariado::TrabalhadorAssalariado(string n, float s) :Trabalhador(n,s)
{
}

TrabalhadorAssalariado::~TrabalhadorAssalariado()
{
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}