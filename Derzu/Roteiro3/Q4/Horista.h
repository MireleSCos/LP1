#pragma once 
#include "Funcionario.h"

class Horista : public Funcionario
{
    private:
        /* data */
    protected:
        float salarioPorHora, horasTrabalahadas;
    public:
        Horista(/* args */);
        Horista(string ,int , float,float );
        ~Horista();

        float getSH();
        float getHT();

        void setSH(float);
        void setHT(float);

        float calcularSalario();
};
