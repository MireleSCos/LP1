#pragma once 

//Classe abstrata - Entendo como um espaço para generalizar algum objeto
//Classes que possuem pelo menos um método virtual puro
//Compilador impede que se crie uma instância desse tipo
//Método vitual deve ser obrigatoriamente implementado pela subclasse concreta

class IConta
{
private:
    /* data */
public:
    IConta(/* args */);

    virtual void sacar(double) = 0;
    virtual void depositar(double) = 0;

    ~IConta();
};


