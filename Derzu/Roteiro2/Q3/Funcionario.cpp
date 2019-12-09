#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario()
    :matricula("123")
{
    cout << "Estou no construtor sem parametros de Funcionario"<<endl;

}

Funcionario::~Funcionario()
{

}

Funcionario::Funcionario(std::string matricula, std::string nome, double salario)
{
    this->matricula = matricula;
    this->nome = nome;
    this->salario = salario;

    cout << "Estou no construtor com parametros de Funcionario"<<endl;

}

std::string Funcionario::getMatricula(){
    return matricula;
}
 std::string Funcionario::getNome(){
     return nome;
 }
       
double Funcionario:: getSalario(){
    return salario;
}

void Funcionario::setMatricula(std::string matricula){
    this->matricula = matricula;
}
void Funcionario::setNome(std::string nome){
    this->nome = nome;
}
void Funcionario::setSalario(double salario){
    this->salario = salario;
}
