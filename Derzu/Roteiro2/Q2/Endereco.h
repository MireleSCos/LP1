#pragma once 
#include "string"
using namespace std;

class Endereco
{
private:
    /* data */
public:
    Endereco();

    Endereco(string r, string n, string b, string c, string e, string ce);

    string rua, num, bairro, cidade, estado, cep;

    string toString();
};

