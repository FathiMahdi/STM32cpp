#include "AMS.hpp"
#include "main.h"



/// @brief Toggle MCU LED
/// @param sleep as ma
void CppClass::ToggleLed(uint32_t sleep)
{
    HAL_GPIO_TogglePin(MCU_LED_GPIO_Port, MCU_LED_Pin);
    HAL_Delay(sleep);
}


/// @brief Toggle MCU LED
/// @param sleep as ma
void CppClass::ToggleLed()
{
    HAL_GPIO_TogglePin(MCU_LED_GPIO_Port, MCU_LED_Pin);
    HAL_Delay(1000);
}



/// @brief 
/// @param x 
/// @param y 
/// @return 
int CppClass::add(int x, int y)
{
    r1 =  x + y;
    return r1;
}

/// @brief 
/// @param result 
/// @return 
float CppClass::getResult(float *result)
{
    return r2;
}

/// @brief 
/// @param result 
/// @return 
int CppClass::getResult(int* result)
{
    return r1;
}


/// @brief add two numbers 
/// @param x 
/// @param y 
/// @return 
float CppClass::add(float x, float y)
{
    r2 = x + y;
    return r2;
}

