#ifndef _INVOKER_H_
#define _INVOKER_H_

#include "command.h"

class Invoker
{
public:
  Invoker(Command * command);
  ~Invoker();

  void SetCommand(Command * command);

  void Invoke(); //Ö´ÐÐÃüÁî

private:
  Command * command_;

};

#endif //_INVOKER_H_