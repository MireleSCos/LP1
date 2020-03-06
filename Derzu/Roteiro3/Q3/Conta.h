#pragma once 

#include "string"

using namespace std;

class Conta
{
    private:
        /* data */

    protected:
        string nomeCli;
        float saldo;
        int numConta;
    public:

        Conta();

        Conta(string nome, float saldo, int numero);

        ~Conta();

        string getNomeCli();
        float getSaldo();
        int getNumConta();

        void setNomeCli(string);
        void setSaldo(float);
        void setNumConta(int);

        float sacar(double);
        float depositar(double);

};

