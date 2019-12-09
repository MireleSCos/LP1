#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    protected:
        std::string matricula, nome;
        double salario;

    public:
        Funcionario();
        Funcionario(std::string matricula, std::string nome, double salario);

        virtual ~Funcionario();
       std::string getMatricula();
       std:: string getNome();
       double getSalario();

       void setMatricula(std::string matricula);
       void setNome(std::string nome);
       void setSalario(double salario);
};




#endif