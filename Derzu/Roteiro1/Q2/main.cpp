#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
    Invoice produto;

    int n, q;
    float p;
    string d;

    cout << "Cadastrar produto:" << endl;
    cout << "\t Cod: " ;
    cin >> n;
    cout << "\t Descrição: " ;
    cin >> d;
    cout << "\t Preço: " ;
    cin >> p;
    cout << "\t Quantidade: " ;
    cin >> q;

    produto = Invoice(n,d,q,p);

    cout <<"\n\nProduto cadastrado: ";
    cout << "\n\n Cod: " << produto.getNum() <<"\n Descrição: " << produto.getDesc() << "\n Preço:  " << produto.getPreco()<< "\n Quantidade: "<< produto.getQuant() << "\n";
    cout <<" Lucro: " << produto.getInvoiceAmount() << "\n\n";
}