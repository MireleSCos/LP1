#include <iostream>
#include "Animal.h"
#include "Cachorro.h"


using namespace std;

int main()
{
    
    /*Exemplo de polimorfismo: acontece quando o tipo da variável de referência é
      o da superclasse e ela aponta para uma classe filha */

    Animal *brede = new Cachorro();
    cout << "Tudo ok" << endl;
    return 0;
}
