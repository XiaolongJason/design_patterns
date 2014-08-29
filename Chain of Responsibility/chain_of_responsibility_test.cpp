#include "concrete_handle_a.h"
#include "concrete_handle_b.h"

#include <iostream>

int main(int argc, char* argv[])
{
  Handle* h1 = new ConcreteHandleA();
  Handle* h2 = new ConcreteHandleB();
  h1->SetSuccessor(h2);
  h2->SetSuccessor(h1);
  h1->HandleRequest();

  system("pause");
  return 0;
}