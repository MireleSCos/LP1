#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor : public Funcionario
{
private:
    
public:
    Consultor();
    Consultor(std::string matricula, std::string nome, double salario);
    virtual ~Consultor();

    double getSalario();
    double getSalario(double percentual);
};



#endif