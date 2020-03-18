#pragma once 

#include "IConta.h"
#include "SaldoNaoDisponivelException.h"
#include "string"

using namespace std;

class Conta : public IConta
{
    private:
        /* data */
    public:

        string nomeCli;
        float salarioMen, saldo, limite;
        int numConta;

        Conta();

        Conta(string nome, float salario, float saldo, int numero);

        ~Conta();

        string getNomeCli();
        float getSalarioMen();
        float getSaldo();
        float getLimite();
        int getNumConta();

        void setNomeCli(string);
        void setSalarioMen(float);
        void setSaldo(float);
        void setLimite(float);
        void setNumConta(int);

        float sacar(double);
        float depositar(double);
        virtual void definirLimite();


};

