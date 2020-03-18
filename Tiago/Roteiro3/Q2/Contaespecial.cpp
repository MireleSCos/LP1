#include "Contaespecial.h"

Contaespecial::Contaespecial(/* args */)
{
}
Contaespecial::Contaespecial(string nome, float salario, float saldo, int numero) 
    : Conta (nome, salario, saldo, numero)
{
}

Contaespecial::~Contaespecial()
{
}
void Contaespecial::definirLimite(){

    this->limite = salarioMen * 3;

}