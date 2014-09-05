#ifndef _SIGLETON_H_
#define _SIGLETON_H_

#include "singleton_template.h"

#include <iostream>

class MyClass
  :public singleton<MyClass>
{
  ENABLE_SINGLETON;
public:
  void DoSomething()
  {
    std::cout << "DoSomething()" << std::endl;
  }

private:
  MyClass(){}
  ~MyClass(){}

};


#endif //_SIGLETON_H_