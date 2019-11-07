//Questão 3 do primeirop roteiro - Tiago Maritan
//Mirele da Silva Costa

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int i,num_jogadas, valor_dado;
    srand(time(NULL));
    while (1){

        float perc_jogadas[6] = {};

        cout << "Digite o numero de jogadas:" << endl;
        cin >> num_jogadas;

        if (num_jogadas == 0){
            break;
        }

        for (i = 0; i < num_jogadas; i++){

            valor_dado = (rand() % 6); // Gera numero randomico de 0 a 6
            perc_jogadas[valor_dado] = perc_jogadas[valor_dado] + 1;

        }
        for (i = 0; i < 6; i++){
            cout << " Percentual que  # "<< i+1 << " surgiu foi " << (perc_jogadas[i] * 100) /num_jogadas << "%"<< endl;

        }
    }
    return 0;
}

