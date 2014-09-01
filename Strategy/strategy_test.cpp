#include "context.h"
#include "concrete_strategy.h"

#include <iostream>

int  main(int argc, char* argv[])
{
  Context * context = new Context();
  Strategy * strategy = new ConcreteStrategy();

  context->SetStrategy(strategy);

  context->Action();

  
  system("pause");

  return 0;
}