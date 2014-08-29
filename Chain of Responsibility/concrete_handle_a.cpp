#include "concrete_handle_a.h"
#include <iostream>

ConcreteHandleA::ConcreteHandleA()
{

}

ConcreteHandleA::~ConcreteHandleA()
{

}

ConcreteHandleA::ConcreteHandleA(Handle * successor)
:Handle(successor)
{

}

void ConcreteHandleA::HandleRequest()
{
  if (GetSuccessor())
  {
    std::cout << "ConcreteHandleA::HandleRequest() handle by Successor" << std::endl;
    GetSuccessor()->HandleRequest();
  }
  else
  {
    std::cout << "ConcreteHandleA::HandleRequest() No Successor" << std::endl;
  }
}
