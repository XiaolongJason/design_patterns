#ifndef _CONCRETE_ITERATOR_H_
#define _CONCRETE_ITERATOR_H_

#include "iterator.h"

class ConcreteAggregate;

class ConcreteIterator :public Iterator
{
public:
  ConcreteIterator(ConcreteAggregate * aggregate);
  ~ConcreteIterator();

  void First();
  void Next();
  bool HasNext();
  Object GetCurrent();

private:
  int index_;
  ConcreteAggregate * aggregate_;
};

#endif //_CONCRETE_ITERATOR_H_


