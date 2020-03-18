#include "Comissionado.h"

Comissionado::Comissionado(/* args */)
{
}
Comissionado::Comissionado(string nome ,int matricula, float vs, float pc, float salario)
    : Funcionario(nome ,matricula)
{
    this->vendasSemanais = vs;
    this->percentualComissao = pc;
    this->salarioBase = salario;
}

Comissionado::~Comissionado()
{
}

float Comissionado::calcularSalario(){
    return salarioBase + (percentualComissao * vendasSemanais);
}
