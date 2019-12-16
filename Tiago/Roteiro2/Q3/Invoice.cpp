#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice()
{
    num = 0;
    desc = "null";
    quant = 0;
    preco = 0;
}
Invoice::Invoice(int n, string d, int q, float p)
{
    num = n;
    desc = d;
    quant = q>0?q:0;
    preco = p>0?p:0.0;
}

void Invoice::setNum(int n){
    num = n;
}

void Invoice::setDesc(std::string d){
    desc = d;
}
void Invoice::setQuant(int q){
    quant = q;
}
void Invoice::setPreco(float p){
    preco = p;
}

int Invoice::getNum(){
    return num;
}
string Invoice::getDesc(){
    return desc;
}
int Invoice::getQuant(){
    return quant;
}
float Invoice::getPreco(){
    return preco;
}
float Invoice::getInvoiceAmount(){
    return quant * preco;
}
