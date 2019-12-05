#include "Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa()
{
    //ctor
}
Pessoa::Pessoa(string nome)
{
    this->nome = nome;
}
Pessoa::Pessoa(string nome, int idade, string telefone)
{
    this->nome = nome;
    this->idade = idade;
    this->telefone = telefone;

}

Pessoa::~Pessoa()
{
    //dtor
}
string Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}
void Pessoa::setIdade(int idade){
    this->idade = idade;
}
void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
