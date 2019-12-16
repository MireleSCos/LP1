#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamento.h"
#include <string>

using namespace std;

int main(){

    Pagamento pag1 = Pagamento (10000, "Mirele");
    Pagamento pag2 = Pagamento (5000, "Marcilio");

    ControleDePagamento pags = ControleDePagamento();

    pags.setPagametos(pag1, 1);
    pags.setPagametos(pag2, 2);

    cout << "Valor total gasto com pagamentos:" << pags.calculaTotalDePagamento();
    string busca;

    cout << "\n \nDigite o nome para buscar pagamento:";
    cin >> busca;
    
    bool resu = pags.existePagamentoParaFuncionario(busca);

    if (resu == true)
    {
        cout <<"\nTem pagamento para"<< " " << busca <<"\n";  
    }else
    {
        cout <<"\nNão tem pagamento para" << " " << busca << "\n";  
    }
    
}