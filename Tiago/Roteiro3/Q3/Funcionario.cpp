#include "Funcionario.h"

Funcionario::Funcionario(/* args */)
{
}

Funcionario::~Funcionario()
{
}
Funcionario::Funcionario(string nome ,int matricula){
    this->nome = nome;
    this->matricula = matricula;
}

string Funcionario::getNome(){
    return nome;
}
int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(string n){
    this->nome = n;
}
void Funcionario::setMatricula(int m){
    this->matricula = m;
}