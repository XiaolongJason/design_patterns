#include "concrete_subject.h"
#include "observer.h"
#include <algorithm>


ConcreteSubject::ConcreteSubject()
{
}


ConcreteSubject::~ConcreteSubject()
{
}


void ConcreteSubject::RegisterObserver(Observer * observer)
{
  std::list<Observer *>::iterator itr = std::find(observer_list_.begin(),
                                                    observer_list_.end(), 
                                                    observer );
  if (itr == observer_list_.end())
  {
    observer_list_.push_back(observer);
  }

}

void ConcreteSubject::UnRegisterObserver(Observer * observer)
{
  observer_list_.remove(observer);
}
void ConcreteSubject::NotifyObservers()
{
  for (std::list<Observer *>::iterator itr = observer_list_.begin();
    itr != observer_list_.end();
    ++itr)
  {
    (*itr)->Update();
  }

}
