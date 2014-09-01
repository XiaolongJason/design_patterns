#ifndef _CONCRETE_STRATEGY_H_
#define _CONCRETE_STRATEGY_H_ 

#include "strategy.h"
class ConcreteStrategy :public Strategy
{
public:
  ConcreteStrategy();
  ~ConcreteStrategy();
  void Algorithm();
};

#endif //_CONCRETE_STRATEGY_H_




