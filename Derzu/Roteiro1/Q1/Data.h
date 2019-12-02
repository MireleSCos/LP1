#ifndef DATA_H // Definição de um Macho para não criar a classe mais de uma vez
#define DATA_H


class Data
{
    public:
        Data();
        Data(int d, int m, int a);
        int dia;
        int mes;

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        int getDia();
        int getMes();
        int getAno();

        void avanDia();


    private:
        int ano;
        int dia;
        int mes;

};

#endif // DATA_H
