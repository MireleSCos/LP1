#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H

#include <string>
#include "Pagamento.h"

using namespace std;

class ControleDePagamento
{
    private:
        Pagamento pags[3];
    public:

        ControleDePagamento();

        void setPagametos(Pagamento pag, int p);
        double calculaTotalDePagamento();
        bool existePagamentoParaFuncionario (string nomeFuncionario);
};



#endif