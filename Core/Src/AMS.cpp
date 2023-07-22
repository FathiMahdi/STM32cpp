#include "AMS.hpp"
#include "main.h"


void CppClass::ToggleLed(uint32_t sleep)
{
    HAL_GPIO_TogglePin(MCU_LED_GPIO_Port, MCU_LED_Pin);
    HAL_Delay(sleep);
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