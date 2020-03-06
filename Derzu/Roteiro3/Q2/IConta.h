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
   ~IConta();


    //Métodos virtuais puros 
    virtual float sacar(double) = 0;
    virtual float depositar(double) = 0;
};


