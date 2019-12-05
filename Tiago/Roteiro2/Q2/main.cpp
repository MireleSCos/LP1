#include <iostream>
#include "Pessoa.h"
using namespace std;

int main()
{
    Pessoa p1 = Pessoa("Mirele");
    Pessoa p2 = Pessoa("Maria", 45,"708211155");

    cout << "#1  " << p1.getNome() << "\n\t Idade:" << p1.getIdade() << "\n\t Telefone: " << p1.getTelefone() << endl;
    cout << "#2  " << p2.getNome() << "\n\t Idade:" << p2.getIdade() << "\n\t Telefone: " << p2.getTelefone() << endl;

    p1.setIdade(20);
    p1.setTelefone("1223456");

    cout << "#1  " << p1.getNome() << "\n\t Idade:" << p1.getIdade() << "\n\t Telefone: " << p1.getTelefone() << endl;
    cout << "#2  " << p2.getNome() << "\n\t Idade:" << p2.getIdade() << "\n\t Telefone: " << p2.getTelefone() << endl;

    return 0;
}
