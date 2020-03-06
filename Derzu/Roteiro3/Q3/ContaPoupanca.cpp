#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(/* args */)
{
}

ContaPoupanca::ContaPoupanca(string nome, float saldo, int numero, int variacao)
    : Conta(nome, saldo, numero)
{
    this->variacao = variacao;
    this->taxaRedimento = 0.05;
}

ContaPoupanca::~ContaPoupanca()
{
}

int ContaPoupanca::getVariacao(){
    return variacao;
}
float ContaPoupanca::getTaxaRe(){
    return taxaRedimento;
}

void ContaPoupanca::setVariacao(int v){
    this->variacao = v;
}
void ContaPoupanca::setTaxa(float t){
    this->taxaRedimento = t;
}

float ContaPoupanca::render(){
    if (variacao == 1){
        this->taxaRedimento += (this->taxaRedimento * 0.005);
        this->saldo += (this->saldo * this->taxaRedimento); 
        
        return saldo;

    }else if (variacao == 51){

        this->saldo += (this->saldo * this->taxaRedimento); 
        
        return saldo ;
        
    }else{
        return saldo;
    }
}