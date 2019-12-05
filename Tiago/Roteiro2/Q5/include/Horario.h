#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int h, int m, int s);
        virtual ~Horario();

        void setHoratio(int h, int m, int s);

    protected:

    private:
        int hora,minu,sigu;
};

#endif // HORARIO_H
