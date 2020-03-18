#pragma once

#include <iostream>
#include <exception>
using namespace std;

class ValorAbaixoException :public exception
{
private:
    /* data */
public:
    ValorAbaixoException(/* args */);
    ~ValorAbaixoException();
};
