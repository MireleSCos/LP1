#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa
{
private:

    string nome;
    int idade;
    int telefone;

public:
    Pessoa(string n, int i, int t);
    Pessoa(string n);

    void setNome(string n);
    void setIdade(int i);
    void setTelefone(int t);
        
    string getNome();
    int getIdade();
    int getTelefone();

};


#endif