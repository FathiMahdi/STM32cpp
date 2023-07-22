#include "AMS.hpp"


CppClass::CppClass(int x, float y)
{
    r1 = x;
    r2 = y;
    
}

int CppClass::add(int x, int y)
{
    r1 =  x + y;
    return r1;
}


float CppClass::getResult(float *result)
{
    return r2;
}


int CppClass::getResult(int* result)
{
    return r1;
}

float CppClass::add(float x, float y)
{
    r2 = x + y;
    return r2;
}