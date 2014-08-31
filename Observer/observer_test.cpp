#include "concrete_observer.h"
#include "concrete_subject.h"

#include <iostream>

int main(int argc, char * argv[])
{
  ConcreteSubject * subject = new ConcreteSubject();
  ConcreteObserver * observer_1 = new ConcreteObserver();
  ConcreteObserver * observer_2 = new ConcreteObserver();

  subject->RegisterObserver(observer_1);
  subject->RegisterObserver(observer_2);

  subject->NotifyObservers();

  system("pause");
  return 0;
}