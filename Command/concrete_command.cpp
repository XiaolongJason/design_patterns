#include "concrete_command.h"

#include "reciever.h"

ConcreteCommand::ConcreteCommand(Reciever * reciever)
:reciever_(reciever)
{

}

ConcreteCommand::~ConcreteCommand()
{

}

void ConcreteCommand::Execute()
{
  reciever_->Action();
}

