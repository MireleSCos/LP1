#include <iostream>
#include "Conta.h"
#include "Contaespecial.h"

int main()
{
    //IConta *c = new IConta(); - Erro, já que IConta é abstract 
    
    Conta *cont = new Conta("Mirele",5000,500,25478);

    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;
    cont->sacar(200);
    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;
    cont->definirLimite();
    cout << "Limite de crédito: " << cont->getLimite()  << endl ;
    cont->depositar(1000);
    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;

    Contaespecial *cont2 = new Contaespecial("Maria",10000,3000,25479);

    cout << "\nSeu saldo é de : " << cont2->getSaldo() << endl ;
    cont2->sacar(200);
    cout << "Seu saldo é de : " << cont2->getSaldo() << endl ;
    cont2->definirLimite();
    cout << "Limite de crédito: " << cont2->getLimite() << endl ;
    cont->depositar(1000);
    cout << "Seu saldo é de : " << cont->getSaldo() << endl ;

    return 0;
}
