#pragma once

#include <iostream>
#include <exception>
using namespace std;

class ValorAcimaException :public exception
{
private:
    /* data */
public:
    ValorAcimaException(/* args */);
    ~ValorAcimaException();
};
