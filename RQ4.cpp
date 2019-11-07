//Questão 4 do primeirop roteiro - Tiago Maritan
//Mirele da Silva Costa

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

float calcPerc(int votos, int cont){
    return ((float)votos * 100) / cont;
}

int main()
{
    int votos[24] = {};
    int voto,i, cont, maisvot, quantvoto;

    cont = maisvot = 0;

    cout << "Enquete: Quem foi o melhor jogador ?" << endl;

    while (1){

        float perc_jogadas[6] = {};

        cout << "Número do jogador (0=fim):" << endl;
        cin >> voto;

        if (voto == 0){
            break;
        }else if (voto > 23 || voto < 1){
            cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;
            continue;
        }else{
            votos[voto] = votos[voto] + 1;
            cont ++;
        }
    }

    cout << "\t Resultado da votação: \n" << endl;

    cout << "\t\t Foram computados " << cont << " votos. \n\n" << endl;

    cout << " \t\t Jogador \t Votos \t\t %\n"<<endl;

    for (i = 0; i < 24; i++){
        if (votos[i] != 0){
            cout << " \t\t "<< i << " \t\t " << votos[i] << "\t\t " << calcPerc(votos[i], cont)<<endl;
            if (votos[i] > maisvot){
                maisvot = i;
                quantvoto = votos [i];
            }
        }
    }

    cout << "\n \t O melhor jogador foi o número " << maisvot << ", com " << quantvoto <<" votos, correspondendo a " << calcPerc(votos[maisvot], cont) <<"% do total de votos.\n\n" << endl;

    return 0;
}
