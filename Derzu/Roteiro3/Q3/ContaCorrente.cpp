#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(/* args */)
{
}
ContaCorrente::ContaCorrente(string nome, float saldo, int numero, float salario)
    : Conta(nome, saldo, numero)
{
    this->salario = salario;
}
ContaCorrente::~ContaCorrente()
{
}

float ContaCorrente::getSalario(){
    return salario;
}
int ContaCorrente::getLimite(){
    return limite;
}   

void ContaCorrente::setSalario(float valor){
    this->salario = valor;
}
void ContaCorrente::setLimite(int valor){
        this->limite = limite;

}
int ContaCorrente::definirLimite(){
    
    this->limite = this->salario * 2;
    return limite;
}