#include "concrete_aggregate.h"
#include "concrete_iterator.h"


ConcreteAggregate::ConcreteAggregate()
{
  for (size_t i = 0; i < SIZE; i++)
  {
    objects_[i] = i;
  }
}


ConcreteAggregate::~ConcreteAggregate()
{
}


Iterator * ConcreteAggregate::CreateIterator()
{
  return new ConcreteIterator(this);
}


Object ConcreteAggregate::GetItem(int index)
{
  if (index< GetSize())
  {
    return objects_[index];
  }
  else
  {
    return -1;
  }

}
int ConcreteAggregate::GetSize()
{
  return SIZE;
}