#include <iostream>
#include "Empregado.h"
#include <string>

using namespace std;

int main(){

    Empregado e1 = Empregado ("Mirele","Costa",10000);
    Empregado e2 = Empregado ("Marcilio","Costa",5000);

    cout << e1.getNome() << "\n\t Salario mensal:"<< e1.getSalario() << "\n\t Salario anual :" << e1.salarioAnual()<< "\n"; 
    cout << e2.getNome() << "\n\t Salario mensal:"<< e2.getSalario() << "\n\t Salario anual :" << e2.salarioAnual() << "\n"; 
   
    e1.almentoSalario();
    e2.almentoSalario();
    
    cout << "\n\nAlmento de 10%\n\n\n\n";

    cout << e1.getNome() << "\n\t Salario mensal:"<< e1.getSalario() << "\n\t Salario anual :" << e1.salarioAnual()<< "\n"; 
    cout << e2.getNome() << "\n\t Salario mensal:"<< e2.getSalario() << "\n\t Salario anual :" << e2.salarioAnual() << "\n"; 

}