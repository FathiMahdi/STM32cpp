#ifndef AMS_HPP_
#define AMS_HPP_
#include <stdint.h>
#include <stdio.h>

class CppClass
{
    public:
        int add(int x, int y);
        float add(float x, float y);
        int getResult(int *result);
        float getResult(float* result);
        void ToggleLed(void);

    private: 
        int   r1;
        float r2;   

};

#endif