#pragma once
#include "string"

using namespace std;

class Funcionario
{
    private:
        /* data */
    protected:
        string nome;
        int matricula;
    public:
        Funcionario();
        Funcionario(string,int);
        ~Funcionario();

        string getNome();
        int getMatricula();

        void setNome(string);
        void setMatricula(int);

        virtual float calcularSalario() = 0;
};