#include "ControleDePagamento.h"

using namespace std;

ControleDePagamento::ControleDePagamento(){
    
}
void ControleDePagamento::setPagametos(Pagamento pag, int p){
    pags[p] = pag;
}
double ControleDePagamento::calculaTotalDePagamento(){

    double sum;

    for (Pagamento pag: pags )
    {
        sum+= pag.getValorPag();
    }
    return sum;
    
}

bool ControleDePagamento::existePagamentoParaFuncionario (string nomeFuncionario){
    for (Pagamento pag:pags)
    {
        if ( nomeFuncionario == pag.getNome()){
            return true;
        }
       
    }
    return false;
}

