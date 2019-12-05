#include "Data.h"

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 0001;

}
Data::Data(int d, int m, int a){
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12){
        dia =d;
        mes = m;
        ano = a;
    }else{
        Data();
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
int Data::compara(Data d1){
    if (this->dia == d1.getDia() && this->mes == d1.getMes() && this->ano == d1.getAno()){
        return 0;
    }else if(this->ano > d1.getAno()){
        return 1;
    }else if(this->ano == d1.getAno()){
        if (this->mes > d1.getMes()){
            return 1;
        }else if(this->mes < d1.getMes()){
            return -1;
        }else if (this->mes == d1.getMes()){
            if(this->dia > d1.getDia()){
                return 1;
            }else{
                return -1;
            }
        }
    }else{
        return -1;
    }
}
string Data::getMesExtenso(){
    switch(this->getMes()){
        case 1:
            return "Janeiro";
            break;
        case 2:
            return "Fevereiro";
            break;
        case 3:
            return "Março";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Maio";
            break;
        case 6:
            return "Junho";
            break;
        case 7:
            return "Julho";
            break;
        case 8:
            return "Agosto";
            break;
        case 9:
            return "Setembro";
            break;
        case 10:
            return "Outubro";
            break;
        case 11:
            return "Novembro";
            break;
        case 12:
            return "Dezembro";
            break;
    }
}
int Data::isBissexto(){
    if (this->ano % 4 == 0 && this->ano % 100 != 0 ){
            return 1; // É bissexto
    }else if (this->ano % 400 == 0 && this->ano % 100 != 0 ){
        return 1;
    }else{
        return 0;
    }
}


