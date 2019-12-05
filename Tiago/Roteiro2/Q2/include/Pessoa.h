#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string nome);
        Pessoa(string nome, int idade, string telefone);
        virtual ~Pessoa();

        string getNome();
        int getIdade();
        string getTelefone();

        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(string telefone);

    protected:

    private:
        string nome;
        int idade;
        string telefone;

};

#endif // PESSOA_H
