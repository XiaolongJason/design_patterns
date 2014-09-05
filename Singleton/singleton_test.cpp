#include "singleton.h"

#include <iostream>

int  main(int argc, char* argv[])
{

  MyClass::instance()->DoSomething();

  system("pause");

  return 0;
}