#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos() {

}
    
void ControleDeGastos::setDespesa(Despesa d, int pos) {
    despesas[pos] = d;
}

double ControleDeGastos::calculaTotalDeDespesas() {
    double total = 0;
    
    for (int i=0 ; i< max ; i++)
        total += despesas[i].getValor();
    


    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string t) {
    for (Despesa d : despesas)
        if (d.getTipoDespesa() == t)
            return true;
            
    return false;
}

std::string ControleDeGastos::toString() {
    std::string output = "";
    
    for (int i=0 ; i< max ; i++)
        if (despesas[i].getValor() != 0)
            output += despesas[i].toString() + "\n";
        
    return output;  
}













