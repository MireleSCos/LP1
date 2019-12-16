#include <iostream>
#include <string>
#include "Data.h"
#include "Horario.h"
#include "Voo.h"

int main(){

    Data dat = Data(16,11,1999);
    Horario hora = Horario(20,30,00);

    Voo saoPaulo = Voo(1,dat,hora);

    cout << "Informações do Voo:" << endl;
    cout << "\t\t Numero: " << saoPaulo.getNumVoo() << "\n\t\t Data: "<< saoPaulo.getData().getDia() << "/" << saoPaulo.getData().getMes() << "/" << saoPaulo.getData().getAno() << endl;
    cout << "\t\t Horario: "<< saoPaulo.getHorario().getHora() << ":" << saoPaulo.getHorario().getMinu() << ":" << saoPaulo.getHorario().getSegu() << endl;
    cout << "\t\t Proxima cadeira livre: " << saoPaulo.proximoLivre() << " de " << saoPaulo.vagas() << " cadeiras livres " << endl;
    
    saoPaulo.ocupa(0);
    saoPaulo.ocupa(1);
    saoPaulo.ocupa(2);
    saoPaulo.ocupa(3);
    saoPaulo.ocupa(95);
    
    cout << "\t\t Proxima cadeira livre: " << saoPaulo.proximoLivre() << " de " << saoPaulo.vagas() << " cadeiras livres " << endl;



}
