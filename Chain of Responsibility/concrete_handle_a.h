#ifndef _CONCRETE_HANDLE_A_H_
#define _CONCRETE_HANDLE_A_H_

#include "handle.h"

class ConcreteHandleA :public Handle
{
public:
  ConcreteHandleA();
  ~ConcreteHandleA();

  ConcreteHandleA(Handle * successor);

  void HandleRequest();
};

#endif //_CONCRETE_HANDLE_A_H_