#include "AMS.hpp"
#include "main.h"
#include <vector>

using namespace std;


vector <uint32_t> v;

uint32_t time = 0;
CppClass myCppClass;


void CppMain()
{

  while (1)
  {
    myCppClass.ToggleLed(time);
    if (time<5000)
    {
      time+=500;
    }
    else
    {
      time=0;
    }
    
    v.push_back(time); // increase the toggling time
  }
}