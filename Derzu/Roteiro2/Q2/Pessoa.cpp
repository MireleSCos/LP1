#include "Pessoa.h"
Pessoa::Pessoa(/* args */)
{
}

Pessoa::Pessoa(string nome){
    this->nome = nome;
}
Pessoa::Pessoa(string n, Endereco e, string t){
    this->nome = n;
    this->ende = e;
    this->telefone = t;
}

void Pessoa::setNome(string n){
    this->nome = n;
}
void Pessoa::setEnde(Endereco e){
    this->ende = e;
}
void Pessoa::setTele(string t){
    this->telefone = t;
}
string Pessoa::getNome(){
    return nome;
}
Endereco Pessoa::getEnde(){
    return ende;
}
string Pessoa::getTele(){
    return telefone;
}
