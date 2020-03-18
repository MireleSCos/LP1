#include <iostream>
#include "Conta.h"
#include "Contaespecial.h"
#include "SaldoNaoDisponivelException.h"

int main()
{
    //IConta *c = new IConta(); - Erro, já que IConta é abstract 
    
    Conta *cont = new Conta("Mirele",5000,500,25488);

    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;

    try
    {
        float saque = cont->sacar(600);
        cout << "Saque efetuado com sucesso de "<< saque <<"! \n";
    }
    catch(SaldoNaoDisponivelException e)
    {
        cout << "Saldo insuficiente ! \n";
    }

    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;
    cont->definirLimite();
    cout << "Limite de crédito: " << cont->getLimite()  << endl ;
    cont->depositar(1000);
    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;

    Contaespecial *cont2 = new Contaespecial("Maria",10000,3000,25479);

    cout << "\nSeu saldo é de : " << cont2->getSaldo() << endl ;

    try
    {
        float saque2 = cont2->sacar(200);
        cout << "Saque efetuado com sucesso de "<< saque2 <<"! \n";
    }
    catch(SaldoNaoDisponivelException e)
    {
        cout << "Saldo insuficiente ! \n";
    }

    cout << "Seu saldo é de : " << cont2->getSaldo() << endl ;
    cont2->definirLimite();
    cout << "Limite de crédito: " << cont2->getLimite() << endl ;
    cont->depositar(1000);
    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;

    return 0;
}
