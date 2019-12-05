#include "Horario.h"

Horario::Horario()
{
    //ctor
}
Horario::Horario(int h, int m, int s)
{
    if (h < 25 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0){
        hora = h;
        minu = m;
        sigu = s;
    }else{
        hora = 0;
        minu = 0;
        sigu = 0;
    }
}


Horario::~Horario()
{
    //dtor
}
