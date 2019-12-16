#ifndef VOO_H
#define VOO_H

#include "Data.h"
#include "Horario.h"

using namespace std;
class Voo{

    private:
    public:
        int num;
        Data dat;
        Horario hora;
        int lugares[100] = {0};

        Voo();
        Voo(int n,Data d, Horario h);
        int proximoLivre();
        bool verifica(int v);
        bool ocupa(int v);
        int vagas();

        int getNumVoo();
        Data getData();
        Horario getHorario();
};
#endif
