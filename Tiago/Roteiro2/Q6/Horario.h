#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int h, int m, int s);

        void setHora(int h);
        void setMinu(int m);
        void setSegu(int s);

        int getHora();
        int getMinu();
        int getSegu();

        void setHoratio(int h, int m, int s);
        void avancarHorario();

    private:
        int hora,minu,segu;
};

#endif // HORARIO_H
