#include "Horista.h"


Horista::Horista(/* args */)
{
}

Horista::Horista(string nome ,int matricula, float sh, float ht)
    :Funcionario(nome , matricula)
{
    this->salarioPorHora = sh;
    this->horasTrabalahadas = ht;
}

Horista::~Horista()
{
}

float Horista::getSH(){
    return salarioPorHora;
}
float Horista::getHT(){
    return horasTrabalahadas;
}

void Horista::setSH(float s){
    this->salarioPorHora = s;
}
void Horista::setHT(float h){
    this->horasTrabalahadas = h;
}

float Horista::calcularSalario(){
    
    if (this->horasTrabalahadas > 40)
    {
        float horaExtra = horasTrabalahadas - 40;
        return (salarioPorHora * horasTrabalahadas) + ((salarioPorHora * 1.5)*horaExtra);

    }else{
        return salarioPorHora * horasTrabalahadas;
    }
    
    
}
