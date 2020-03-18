#include <iostream>
#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"


int main()
{
    Assalariado *f1a = new Assalariado ("Mirele",523,3000);
    Horista *f2h = new Horista("Maria", 526, 100, 40);
    Horista *f3h = new Horista("João", 528, 100, 43);
    Comissionado *f4c = new Comissionado("Marcilio", 892, 6, 10,1200);
    
    std::vector<Funcionario*> fs;
    fs.push_back(f1a);
    fs.push_back(f2h);
    fs.push_back(f3h);
    fs.push_back(f4c);

    SistemaGerenciaFolha *sGerencia = new SistemaGerenciaFolha(fs, 50000);

    try
    {
        float folha = sGerencia->calcularValorTotalFolha();
        cout << "O valor da folha de pagamento é " << folha << endl;
    }
    catch(OrcamentoEstouradoException e)
    {
        cout << "Não há orçamento para pagar os funcionários\n";
    }

    try
    {
        float salario = sGerencia->consultarSalarioFuncionario("ll");
        cout << "O salario da busca é  " << salario << endl;
    }
    catch(FuncionarioNaoExisteException e)
    {
        cout << "Não há funcionario com esse nome\n";
    }

    cout << "Sistema Finalizado" << endl;
    
    return 0;
}
