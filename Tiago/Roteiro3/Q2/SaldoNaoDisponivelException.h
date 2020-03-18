#pragma once
#include <iostream>
#include <exception>
using namespace std;

class SaldoNaoDisponivelException : public exception
{
private:
    /* data */
public:
    SaldoNaoDisponivelException(/* args */);
    ~SaldoNaoDisponivelException();
};
