#pragma once 
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"
#include <vector>   //Usar vetor

#include "Funcionario.h"

class SistemaGerenciaFolha
{
    private:

    public:
        vector <Funcionario*> funcionarios;
        float orcamento;

        SistemaGerenciaFolha();
        SistemaGerenciaFolha(vector <Funcionario*>, float);
        ~SistemaGerenciaFolha();

        void setFuncionarios(vector <Funcionario*>);
        float calcularValorTotalFolha();
        
        float consultarSalarioFuncionario(string);
};
