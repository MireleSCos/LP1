#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;

class Data
{
    public:
        Data();
        Data(int d, int m, int a);

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        int getDia();
        int getMes();
        int getAno();

        int compara(Data d1);
        string getMesExtenso();
        int isBissexto();

    private:
        int ano;
        int dia;
        int mes;


};

#endif // DATA_H
