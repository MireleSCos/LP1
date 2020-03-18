#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream principal;
    principal.open("teste.txt", ios::in);

    if(!principal.is_open())
    {
        cout << "Erro ao abrir o arquivo principal" << endl;
        return 0;
    }

    ofstream secundario;
    secundario.open("teste_bkp.txt", ios::out);

    if(!secundario.is_open())
    {
        cout << "Erro ao abrir o arquivo secundario." << endl;
        return 0;
    }

    string conteudo;

    while(!principal.eof())
    {
        getline(principal, conteudo);
        secundario << conteudo << endl;
    }

    principal.close();
    secundario.close();
    return 0;
}