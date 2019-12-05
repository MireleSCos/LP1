#include <iostream>
#include "Data.h"

using namespace std;

int main()
{

    int dia,mes,ano;
    Data dat_cad;
    Data amanha;

    cout << "Cadastrar data 1:" << endl;
    cout << "\t\t Dia: " ;
    cin >> dia;
    cout << "\t\t Mes: " ;
    cin >> mes;
    cout << "\t\t Ano: " ;
    cin >> ano;

    dat_cad = Data(dia,mes,ano);
    cout << "\n\t Mes por extenso : " << dat_cad.getMesExtenso() << endl;


    cout << "Cadastre data 2:" << endl;
    cout << "\t\t Dia: " ;
    cin >> dia;
    cout << "\t\t Mes: " ;
    cin >> mes;
    cout << "\t\t Ano: ";
    cin >> ano;

    amanha = Data(dia,mes,ano);
    cout << "\n\t Mes por extenso : " << amanha.getMesExtenso() << endl;

    int op = dat_cad.compara(amanha);

    if (op == 0){
        cout << "\n\nIguais" << endl;
    }else if(op == 1){
        cout << "\n\n Data 1 maior que data 2" << endl;
    }else {
        cout << "\n\nData 1 menor que data 2" << endl;

    }

    op = dat_cad.isBissexto();

    if (op == 0){
        cout << "Data 1 não é bissexto" << endl;
    }else {
        cout << "Data 1 é bissexto" << endl;

    }

    op = amanha.isBissexto();

    if (op == 0){
        cout << "Data 2 nao eh bissexto" << endl;
    }else {
        cout << "Data 2 eh bissexto" << endl;

    }


    return 0;
}
