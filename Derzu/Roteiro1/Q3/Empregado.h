#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

using namespace std;

class  Empregado
{
    private:
        /* data */
    public:

        Empregado(/* args */);

        string nome;
        string sobrenome;
        float salario;

        void setNome(string n);
        void setSobrenome(string sobrenome);
        void setSalario(float salario);
        
        string getNome();
        string getSobrenome();
        float getSalario();

        float salarioAnual();
        float almentoSalario();

    };

}



#endif