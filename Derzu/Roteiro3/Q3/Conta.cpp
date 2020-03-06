#include "Conta.h"
#include <iostream>

Conta::Conta()
{
}

Conta::Conta(string nome, float saldo, int numero)
{
    this->nomeCli = nome;
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
float Conta::getSaldo(){
    return saldo;
}
int Conta::getNumConta(){
    return numConta;
}

//Sets

void Conta::setNomeCli(string nome){
    this->nomeCli = nome;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}
void Conta::setNumConta(int numc){
    this->numConta = numc;
}

float Conta::sacar(double valor){
    if (this->saldo >= valor){
        this->saldo -= valor;
        cout << "Saque efetuado com sucesso de "<< valor <<"! \n";

    }else
    {
        cout << "Saldo insuficiente ! \n";
    }    
    return saldo;
}
float Conta::depositar(double valor){

    this->saldo += valor;
    cout << "Deposito efetuado com sucesso de "<< valor <<"! \n";

    return saldo;
}