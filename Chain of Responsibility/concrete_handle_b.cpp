#include "concrete_handle_b.h"
#include <iostream>

ConcreteHandleB::ConcreteHandleB()
{

}

ConcreteHandleB::~ConcreteHandleB()
{

}

ConcreteHandleB::ConcreteHandleB(Handle * successor)
:Handle(successor)
{

}

void ConcreteHandleB::HandleRequest()
{
  if (GetSuccessor())
  {
    std::cout << "ConcreteHandleB::HandleRequest() handle by Successor" << std::endl;
    GetSuccessor()->HandleRequest();
  }
  else
  {
    std::cout << "ConcreteHandleB::HandleRequest() No Successor" << std::endl;
  }

}
