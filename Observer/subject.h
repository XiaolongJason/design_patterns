#ifndef _SUBJECT_H_
#define _SUBJECT_H_

class Observer;

class Subject
{
public:
  Subject();
  virtual ~Subject();
  virtual void RegisterObserver(Observer * observer) = 0;
  virtual void UnRegisterObserver(Observer * observer) = 0;
  virtual void NotifyObservers() = 0;
};



#endif //_SUBJECT_H_




