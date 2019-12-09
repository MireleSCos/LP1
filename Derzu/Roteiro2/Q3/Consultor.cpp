#include <iostream>
#include "Consultor.h"

using namespace std;

Consultor::Consultor()
    :Funcionario("","",0)
{
    cout << "Estou no construtor de Consultor"<<endl;
}

Consultor::~Consultor()
{
    
}

Consultor::Consultor(std::string matricula, std::string nome, double salario)
    :Funcionario(matricula, nome, salario)
{


}

double Consultor::getSalario(){
    return salario * 1.1;
}

double Consultor::getSalario(double percentual){
    return salario + salario * percentual;
}
