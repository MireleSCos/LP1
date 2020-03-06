#include "Assalariado.h"
Assalariado::Assalariado(/* args */)
{
}
Assalariado::Assalariado(string nome ,int matricula, float salario)
    : Funcionario(nome ,matricula)
{
    this->salario = salario;
}

Assalariado::~Assalariado()
{
}

float Assalariado::getSalario(){
    return salario;
}
void Assalariado::setSalario(float s){
    this->salario = s;
}

float Assalariado::calcularSalario(){
    return salario;
}