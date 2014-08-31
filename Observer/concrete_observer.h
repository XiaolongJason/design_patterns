#ifndef _CONCRETE_OBJECT_H_
#define _CONCRETE_OBJECT_H_

#include "observer.h"

class ConcreteObserver :public Observer
{
public:
  ConcreteObserver();
  ~ConcreteObserver();

  void Update();
};



#endif //_CONCRETE_OBJECT_H_


