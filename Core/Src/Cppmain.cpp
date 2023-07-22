#include "AMS.hpp"
#include "main.h"
#include <vector>

using namespace std;


vector <uint32_t> v;

uint32_t time = 0;
CppClass myCppClass;
int x = 0;

void CppMain()
{

  while (1)
  {
    
    if (time<5000)
    {
      time+=100;
    }
    else if (time >= 5000)
    {
      time=0;
      x = 0;
    }
    
    v.push_back(time); // increase the toggling time

    myCppClass.ToggleLed(v[x]);

    x++;

  }
}