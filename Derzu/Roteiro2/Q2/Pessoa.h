#pragma once 
#include "string"
#include "Endereco.h"

using namespace std;

class Pessoa
{
    private:
        /* data */
    public:
        Pessoa(/* args */);
        Pessoa(string nome);
        Pessoa(string n, Endereco e, string t);

        string nome, telefone;
        Endereco ende;

        void setNome(string n);
        void setEnde(Endereco e);
        void setTele(string t);
        string getNome();
        Endereco getEnde();
        string getTele();
        
};
