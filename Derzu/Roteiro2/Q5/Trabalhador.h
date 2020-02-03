#pragma once 
#include "string"

using namespace std;

class Trabalhador
{
    private:
        /* data */
    public:
        Trabalhador(/* args */);
        Trabalhador(string n, float s);
        ~Trabalhador();

        string nome;
        float salario;
        
};
