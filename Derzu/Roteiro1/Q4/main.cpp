#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main(){

    Pessoa p1 = Pessoa ("Mirele",20,99999999);
    Pessoa p2 = Pessoa ("Marcilio");

    cout << p1.getNome() << "\n\t Idade:"<< p1.getIdade() << "\n\t Telefone :" << p1.getTelefone()<< "\n"; 
    cout << p2.getNome() << "\n\t Idade:"<< p2.getIdade() << "\n\t Telefone :" << p2.getTelefone()<< "\n"; 

}