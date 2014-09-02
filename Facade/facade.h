#ifndef _FACADE_H_
#define _FACADE_H_


#include "sub_system_a.h"
#include "sub_system_b.h"
#include "sub_system_c.h"



class Facade
{
public:
  Facade();
  ~Facade();

  void Method();

private:
  SubSystemA * system_a_;
  SubSystemB * system_b_;
  SubSystemC * system_c_;
};

Facade::Facade()
{
  system_a_ = new SubSystemA();
  system_b_ = new SubSystemB();
  system_c_ = new SubSystemC();
}

Facade::~Facade()
{
  delete system_a_;
  delete system_b_;
  delete system_c_;
}

void Facade::Method()
{
  system_a_->MethodA();
  system_b_->MethodB();
  system_c_->MethodC();
}






#endif //_FACADE_H_
