#include "concrete_observer.h"

#include <iostream>

ConcreteObserver::ConcreteObserver()
{
}


ConcreteObserver::~ConcreteObserver()
{
}

void ConcreteObserver::Update()
{
  std::cout << "ConcreteObserver::Update()" << std::endl;
}
