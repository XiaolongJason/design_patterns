#include "handle.h"



Handle::Handle()
{

}
Handle::Handle(Handle * handle)
{

}

Handle::~Handle()
{

}

void Handle::SetSuccessor(Handle * successor)
{
  successor_ = successor;
}
Handle * Handle::GetSuccessor() const
{
  return successor_;
}

