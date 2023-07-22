#ifndef AMS_HPP_
#define AMS_HPP_
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

class CppClass
{
    public:
        int add(int x, int y);
        float add(float x, float y);
        int getResult(int *result);
        float getResult(float* result);
        void ToggleLed(uint32_t sleep);

    private: 
        int   r1;
        float r2;   

};

#endif