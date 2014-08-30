#include "concrete_iterator.h"
#include "concrete_aggregate.h"


ConcreteIterator::ConcreteIterator(ConcreteAggregate * aggregate)
:index_(0),
 aggregate_(aggregate)
{
}


ConcreteIterator::~ConcreteIterator()
{
}


void ConcreteIterator::First()
{
  index_ = 0;

}

void ConcreteIterator::Next()
{
  ++index_;
}

bool ConcreteIterator::HasNext()
{
  return index_ < aggregate_->GetSize();
}

Object ConcreteIterator::GetCurrent()
{
  return aggregate_->GetItem(index_);
}

