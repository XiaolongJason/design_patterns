#include "aggregate.h"

class Iterator;

class ConcreteAggregate :public Aggregate
{
public:
  ConcreteAggregate();
  ~ConcreteAggregate();

  Iterator * CreateIterator();

  Object GetItem(int index);
  int GetSize();

private:
  enum {SIZE = 10};
  Object objects_[SIZE];
};

