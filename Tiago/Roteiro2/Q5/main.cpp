#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{

    int h,m,s;
    Horario hora;

    cout << "Cadastrar horario:" << endl;
    cout << "\t\t Hora: " ;
    cin >> h;
    cout << "\t\t Minuto: " ;
    cin >> m;
    cout << "\t\t Segundo: " ;
    cin >> s;

    hora = Horario(h,m,s);

    while(1){
        int op;
        cout << hora.getHora() << ":" << hora.getMinu() << ":" << hora.getSegu() << endl;
        cout <<"\n\t\t 0 - Fechar \n\t\t 1 - Avancar horario"<< endl;
        cin >> op;

        if (op == 0){
            break;
        }else if (op == 1){
            hora.avancarHorario();
        }else{
            break;
        }

    }
    return 0;
}
