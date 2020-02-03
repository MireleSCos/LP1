#include "Endereco.h"
#include "string"
#include <iostream>
#include "sstream"


Endereco::Endereco(/* args */)
{
}
Endereco::Endereco(string r, string n, string b, string c, string e, string ce){

    this->rua = r;
    this->num = n;
    this->bairro = b;
    this->cidade = c;
    this->estado = e;
    this->cep = ce;

}
string Endereco::toString(){

    ostringstream end;

    end <<"Rua:"<< rua << ", Bairro:" << bairro << ", Numero:" << num << ", Cidade:" << cidade << " , Estado:" << estado << ", Cep:"<< cep;
    return end.str();
}
