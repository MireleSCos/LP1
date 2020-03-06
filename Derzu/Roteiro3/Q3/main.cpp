#include <iostream>
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "ContaPoupanca.h"

int main()
{
    ContaCorrente *c1 = new ContaCorrente ("Mirele",2000,521,20000);
    ContaPoupanca *c2 = new ContaPoupanca ("Maria",5000,523,1);
    ContaEspecial *c3 = new ContaEspecial ("Marismar", 10000, 524, 20000);
    
    c1->definirLimite();
    c3->definirLimite();

    cout << "O limite de " << c1->getNomeCli() << " é de :" << c1->getLimite() << endl;

    cout << "O limite de " << c3->getNomeCli() << " é de :" << c3->getLimite() << endl;

    cout << "O saldo de " << c2->getNomeCli() << " é de :" << c2->getSaldo() << endl;

    c2->render();

    cout << "O saldo de " << c2->getNomeCli() << " apos render é de  :" << c2->getSaldo() << endl;

    return 0;
}
/* code *//* code */