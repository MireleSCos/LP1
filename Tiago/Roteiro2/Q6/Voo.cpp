#include "Voo.h"
#include "Data.h"
#include "Horario.h"
#include <string>

using namespace std;

Voo::Voo(){

}
Voo::Voo(int n,Data d, Horario h){
    this->num = n;
    this->dat = d;
    this->hora = h;
}

int Voo::proximoLivre(){
    for (int i = 0; i < 101; i++)
    {
        if (this->lugares[i] == 0)
        {
            return i;
        }
        
    }
    
}
bool Voo::verifica(int v){
    if (this->lugares[v] == 0) //Cadeira livre
    {
        return true;
    }else
    {
        return false; //Cadeira ocupada 
    }   
}
bool Voo::ocupa(int v){
    if (this->verifica(v))
    {
        this->lugares[v] = 1;
        return true;

    }else
    {
        return false;
    }   
}

int Voo::vagas(){
    int cont = 0;
    for (int i = 0; i < 100; i++)
    {
        if (this->lugares[i] == 0)
        {
            cont++;
        }
        
    }
    return cont;
}

int Voo::getNumVoo(){
    return num;
}
Data Voo::getData(){
    return dat;
}
Horario Voo::getHorario(){
    return hora;
}