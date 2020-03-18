#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

int main()
{
    TestaValidaNumero *tnum = new TestaValidaNumero();
    try
    {
        tnum->validaNumero(2000);
        cout<<"Teste realizado com sucesso ! "<<endl;
    }
    catch(ValorAbaixoException e)
    {
        cout<<"Valor muito baixo ! " << endl;
    }
    catch(ValorAcimaException e)
    {
        cout<<"Valor acima !" <<endl;
    }
    catch(ValorMuitoAcimaException e)
    {
        cout<<"Valor muito acima ! " <<endl;
    }
    
    return 0;
}
