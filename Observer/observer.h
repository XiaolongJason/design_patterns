#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer
{
public:
  Observer();
  virtual ~Observer();

  virtual void Update() = 0;
};


#endif //_OBSERVER_H_




