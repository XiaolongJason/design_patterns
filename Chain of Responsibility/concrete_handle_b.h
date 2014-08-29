#ifndef _CONCRETE_HANDLE_B_H_
#define _CONCRETE_HANDLE_B_H_

#include "handle.h"

class ConcreteHandleB :public Handle
{
public:
  ConcreteHandleB();
  ~ConcreteHandleB();

  ConcreteHandleB(Handle * successor);

  void HandleRequest();

private:

};

#endif //_CONCRETE_HANDLE_B_H_