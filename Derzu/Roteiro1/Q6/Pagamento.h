#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

using namespace std;

class Pagamento
{
private:

    double valorPagamento;
    string nome;

public:
    Pagamento();
    Pagamento(double v, string n);

    void setNome(string n);
    void setValorPag( double v);
        
    string getNome();
    double getValorPag();


};



#endif
