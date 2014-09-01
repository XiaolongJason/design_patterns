#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class  Strategy;

class Context
{
public:
  Context();
  ~Context();
  void SetStrategy(Strategy * strategy);
  void Action();

private:
  Strategy * strategy_;
};

#endif //_CONTEXT_H_




