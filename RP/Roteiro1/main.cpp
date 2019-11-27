#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
/*
    Data  hoje;
    Data amanha = Data(14,11,2019);
    Data *ontem = new Data();

    ontem->dia = 12;

    hoje.dia = 13;
    hoje.mes = 11;
    cout << "Hoje :" << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
    cout << "Amanha:" << amanha.dia << "/" << amanha.mes << "/" << amanha.ano << endl;

*/

    int dia,mes,ano;
    Data dat_cad;

    cout << "Cadastrar data:" << endl;
    cout << "\t\t Dia: " ;
    cin >> dia;
    cout << "\t\t Mes: " ;
    cin >> mes;
    cout << "\t\t Ano: " ;
    cin >> ano;

    while (1){
        if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12){
            dat_cad = Data(dia,mes,ano);
            cout << "Data cadastrada com sucesso" << endl;
            break;
        }
        else{
            cout << "Data inexistente, cadastre novamente:" << endl;
            cout << "\t\t Dia: " ;
            cin >> dia;
            cout << "\t\t Mes: " ;
            cin >> mes;
            cout << "\t\t Ano: ";
            cin >> ano;
        }
    }
    while(1){
        int op;
        cout << dat_cad.getDia() << "/" << dat_cad.getMes() << "/" << dat_cad.getAno() << endl;
        cout <<"\n\t\t 0 - Fechar \n\t\t 1 - Avançar dia"<< endl;
        cin >> op;

        if (op == 0){
            break;
        }else if (op == 1){
            dat_cad.avanDia();
        }else{
            break;
        }


    }
    return 0;
}
