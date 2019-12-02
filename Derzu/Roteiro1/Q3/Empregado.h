#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

using namespace std;

class  Empregado
{
    private:

        string nome;
        string sobrenome;
        float salario;

    public:
        Empregado();
        Empregado(string n, string so, float s);       

        void setNome(string n);
        void setSobrenome(string so);
        void setSalario(float s);
        
        string getNome();
        string getSobrenome();
        float getSalario();

        float salarioAnual();
        float almentoSalario();

};

#endif