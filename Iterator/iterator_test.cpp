#include "concrete_aggregate.h" 
#include "concrete_iterator.h"
#include <iostream> 


using namespace std;

int main(int argc, char* argv[])
{
  ConcreteAggregate* aggregate = new ConcreteAggregate();
  Iterator* iterator = new ConcreteIterator(aggregate);

  for (; iterator->HasNext(); iterator->Next())
  {
    std::cout << iterator->GetCurrent() << std::endl;
  }
  system("pause");
  return 0;
}