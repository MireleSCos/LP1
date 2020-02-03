#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"

int main(){

    Endereco ed1 = Endereco("Coronel Martiniano","200","Penedo","Caico","RN", "59300000");
    Endereco ed2 = Endereco("Epitacio", "101","Espedicionario","Joao Pessoa","PB","59600444");

    Pessoa p1 = Pessoa("Eloisa",ed1,"00000000");
    Pessoa p2 = Pessoa("Julia", ed2,"58900000");

}