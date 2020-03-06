#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(/* args */)
{
}
ContaEspecial::ContaEspecial(string nome, float saldo, int numero, float salario)
    :ContaCorrente( nome,saldo, numero, salario)
{

}

ContaEspecial::~ContaEspecial()
{
}

int ContaEspecial::definirLimite(){

    this->limite = this->salario * 3;

    return this->limite;
}
