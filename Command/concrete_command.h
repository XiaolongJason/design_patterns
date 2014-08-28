#ifndef _CONCRETE_COMMAND_H_
#define _CONCRETE_COMMAND_H_

#include "command.h"

class Reciever;  // 命令的接收者，实现具体的逻辑

class ConcreteCommand :public Command
{
public:
  ConcreteCommand(Reciever * reciever);
  ~ConcreteCommand();

  void Execute();

private:
  Reciever * reciever_;
};

#endif //_CONCRETE_COMMAND_H_