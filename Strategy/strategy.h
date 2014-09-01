#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
  Strategy();
  virtual ~Strategy();
  virtual void Algorithm() = 0;
};

#endif //_STRATEGY_H_



