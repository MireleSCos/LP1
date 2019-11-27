#ifndef DATA_H
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

};

#endif // DATA_H
