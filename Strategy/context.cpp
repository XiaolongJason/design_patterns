#include "context.h"

#include "strategy.h"

Context::Context()
:strategy_(nullptr)
{
}


Context::~Context()
{
}


void Context::SetStrategy(Strategy * strategy)
{
  strategy_ = strategy;
}
void Context::Action()
{
  if (strategy_)
  {
    strategy_->Algorithm();
  }
}

