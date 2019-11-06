//Questão 1 do primeirop roteiro - Tiago Maritan
//Mirele da Silva Costa

#include <iostream>

#include <cstdlib>


using namespace std;

int main()
{
    int numero, palpite;

    numero = (rand() % 100) + 1; // Gera numero randomico de 1 a 100

    while (1){

        cout << "Digite seu palpite: " << endl;
        cin >> palpite;

        if (palpite > numero){
            cout << "Muito alto. Tente novamente " << endl;
        }else if (palpite < numero){
            cout << "Muito baixo. Tente novamente " << endl;
        }else{
            cout << "Parabens. Voce adivinhou o numero " << endl;
        }

    }

    return 0;
}

