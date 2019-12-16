#include "Horario.h"

Horario::Horario()
{
    //ctor
}
Horario::Horario(int h, int m, int s)
{
    if (h < 24 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0){
        hora = h;
        minu = m;
        segu = s;
    }else{
        hora = 0;
        minu = 0;
        segu = 0;
    }
}

void Horario::setHoratio(int h, int m, int s){
    this->hora = h;
    this->minu = m;
    this->segu = s;
}

void Horario::setHora(int h){
    hora = h;    
}
void Horario::setMinu(int m){
    minu = m;    
}
void Horario::setSegu(int s){
    segu = s;    
}

int Horario::getHora(){ 
    return hora;
}
int Horario::getMinu(){ 
    return minu;
}
int Horario::getSegu(){ 
    return segu;
}
void Horario::avancarHorario(){    
    segu++;
    if (segu > 59){
        segu = 0;
        minu++;
        if (minu > 59)
        {
            minu = 0;
            hora++;
            if (hora > 23)
            {
                hora = 0;
            }
            
        }
        
    }
}
