#include "invoker.h"

Invoker::Invoker(Command * command)
:command_(command)
{

}
Invoker::~Invoker()
{

}

void Invoker::SetCommand(Command * command)
{
  command_ = command;
}

void Invoker::Invoke()
{
  command_->Execute();
}

