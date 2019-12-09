#include <iostream>

#include "Consultor.h"
#include "Funcionario.h"

using namespace std;

int main(){
    Funcionario func1 = Funcionario();
    Funcionario func2 = Funcionario("12345", "José", 1000);
    Consultor con1 = Consultor("893", "Randa", 2000);
    Consultor con2;
    Consultor *con3 = new Consultor("782", "Mirele", 5000);
    Consultor con4 = Consultor("145", "Clara", 1000); // isso não existe, vai dar erro 

    con2.setNome("Jorge");


    cout << "\n\nNome: " << func1.getNome() << "\nSalario: "  <<  func1.getSalario() << endl;
    cout << "\n\nNome: " << func2.getNome() << "\nSalario: " <<  func2.getSalario() << endl;
    cout << "\n\nNome: " << con1.getNome() << "\nSalario: " << con1.getSalario() << endl;
    cout << "\n\nNome: " << con2.getNome() << "\nSalario: " << con2.getSalario() << endl;
    cout << "\n\nNome: " << con3->getNome() << "\nSalario: " << con3->getSalario() << endl;
    cout << "\n\nNome: " << con4.getNome() << "\nSalario: " << con4.getSalario(0.5) << endl;


    return 0;
}