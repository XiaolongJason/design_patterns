#ifndef _ITERATOR_H_
#define _ITERATOR_H_

typedef int Object;

class Iterator
{
public:
  Iterator();
  virtual ~Iterator();

  virtual void First() = 0;
  virtual void Next() = 0;
  virtual bool HasNext() = 0;
  virtual Object GetCurrent() = 0;
};

#endif //_ITERATOR_H_



