#include "command.h"
#include "concrete_command.h"
#include "invoker.h"
#include "reciever.h"

#include <iostream>

int main(int argc, char* argv[])
{
  Reciever* reciever = new Reciever();
  Command* command = new ConcreteCommand(reciever);
  Invoker* invoker = new Invoker(command);
  invoker->Invoke();
  system("pause");
  return 0;
}