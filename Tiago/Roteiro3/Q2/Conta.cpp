#include "Conta.h"
#include <iostream>

Conta::Conta()
{
}

Conta::Conta(string nome, float salario, float saldo, int numero)
{
    this->nomeCli = nome;
    this->salarioMen = salario;
    this->saldo = saldo;
    this->numConta = numero;

}

Conta::~Conta()
{
}

//Gets

string Conta::getNomeCli(){
    return nomeCli;    
}
float Conta::getSalarioMen(){
    return salarioMen;
}
float Conta::getSaldo(){
    return saldo;
}
float Conta::getLimite(){
    return limite;
}
int Conta::getNumConta(){
    return numConta;
}

//Sets

void Conta::setNomeCli(string nome){
    this->nomeCli = nome;
}
void Conta::setSalarioMen(float salario){
    this->salarioMen = salario;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}
void Conta::setLimite(float lim){
    this->limite = lim;
}
void Conta::setNumConta(int numc){
    this->numConta = numc;
}

float Conta::sacar(double valor){
    if (this->saldo >= valor){
        this->saldo -= valor;
           
        return valor;

    }else
    {
        throw SaldoNaoDisponivelException();
    } 
}
float Conta::depositar(double valor){

    this->saldo += valor;
    cout << "Deposito efetuado com sucesso de "<< valor <<"! \n";

    return saldo;
}

void Conta::definirLimite(){

    this->limite = salarioMen * 2;

}