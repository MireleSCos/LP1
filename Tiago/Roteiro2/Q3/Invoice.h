#ifndef INVOICE_H // Definição de um Macho para não criar a classe mais de uma vez
#define INVOICE_H

#include <string>

using namespace std;

class Invoice{
    private:
        int num;
        string desc;
        int quant;
        float preco;

    public:

        Invoice();
        Invoice(int n, string d, int q, float p);


        void setNum(int num);
        void setDesc(string desc);
        void setQuant(int quant);
        void setPreco(float preco);

        int getNum();
        string getDesc();
        int getQuant();
        float getPreco();

        float getInvoiceAmount();
        

};


#endif // DATA_H