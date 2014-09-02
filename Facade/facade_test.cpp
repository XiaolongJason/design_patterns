#include "facade.h"

#include <iostream>


int main(int argc, char * argv[])
{
  Facade *facade = new Facade();
  facade->Method();
  delete facade;

  system("pause");
  return 0;
}