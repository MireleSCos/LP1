//Questão 1 do primeirop roteiro - Tiago Maritan
//Mirele da Silva Costa

#include <iostream>

using namespace std;

int main()
{
    int maior, aux;
    maior = 0;
    aux = maior;

    do{

        cout << "Digite um numero: " << endl;
        cin >> aux;

        if (aux > maior){
            maior = aux;
        }

    }while(aux != 0);

    cout << "Maior numero digitado: " << maior << endl;

    return 0;
}
