#ifndef _AGGREGATE_H_
#define _AGGREGATE_H_

#include "iterator.h"

class Aggregate
{
public:
  Aggregate();
  virtual ~Aggregate();

  virtual Iterator* CreateIterator() = 0;
};



#endif //_AGGREGATE_H_

