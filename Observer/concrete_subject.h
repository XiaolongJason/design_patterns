#ifndef _CONCRETE_SUBJECT_H_
#define _CONCRETE_SUBJECT_H_

#include "subject.h"
#include <list>

class ConcreteSubject :public Subject
{
public:
  ConcreteSubject();
  ~ConcreteSubject();

  void RegisterObserver(Observer * observer);
  void UnRegisterObserver(Observer * observer);
  void NotifyObservers();
private:
  std::list<Observer *> observer_list_;
};


#endif //_CONCRETE_SUBJECT_H_



