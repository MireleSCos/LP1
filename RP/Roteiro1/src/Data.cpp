#include "Data.h"

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 2019;

}
Data::Data(int d, int m, int a){
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12){
        dia =d;
        mes = m;
        ano = a;
    }else{

        dia = 1;
        mes = 1;
        ano = 2019;
    }
}

void Data::setDia(int d){
    dia = d;
}
void Data::setMes(int m){
    mes = m;
}
void Data::setAno(int a){
    ano = a;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::avanDia(){
    dia++;
    if (dia == 32){
        mes++;
        dia = 1;
        if (mes == 13){
            mes = 1;
            ano++;
        }
    }
}
