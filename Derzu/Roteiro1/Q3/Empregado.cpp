#include "Empregado.h"
#include <string>

using namespace std;

Empregado:: Empregado(/* args */)
{
}

void Empregado::setNome(string n){
    nome = n;
};
void Empregado::setSobrenome(string s){
    sobrenome = s;
};
void Empregado::setSalario(float s){
    salario = s;
};
        
string Empregado::getNome(){
    return nome;
}
string Empregado::getSobrenome(){
    return sobrenome;
}
float Empregado::getSalario(){
    return salario;
}

float Empregado::salarioAnual(){
    return salario*12;
}
float Empregado::almentoSalario(){
    salario = salario + (salario * 0,10);
}