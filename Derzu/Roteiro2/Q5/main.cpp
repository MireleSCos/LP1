#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>

int main(){

    TrabalhadorAssalariado t1 = TrabalhadorAssalariado("Marcilio",20000);
    TrabalhadorPorHora t2 = TrabalhadorPorHora("Marcilio",160);

    cout << "Salario semanal do assalariado:" << t1.calcularPagamentoSemanal() <<endl;
    cout << "Salario semanal do por hora:" << t2.calcularPagamentoSemanal(42) <<endl;
    
}