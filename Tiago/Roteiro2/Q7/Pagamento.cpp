#include "Pagamento.h"
#include <string>

using namespace std;
Pagamento::Pagamento(){
    
}
Pagamento::Pagamento(double v, string n){
    nome = n;
    valorPagamento = v;
}

void Pagamento::setNome(string n){
    nome = n;
}
void Pagamento::setValorPag( double v){
    valorPagamento = v;
}
        
string Pagamento::getNome(){
    return nome;
}
double Pagamento::getValorPag(){
    return valorPagamento;
}