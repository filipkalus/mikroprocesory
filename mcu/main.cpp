#include <stdlib.h>
#include <stdio.h>
#include <vector>

#include "state_machine.h"

int main()
{
  std::vector<std::vector<unsigned int>> lambda;
  std::vector<unsigned int> delta;

  class CStateMachine *fsm;

  fsm = new CStateMachine(lambda, delta);

  fsm->process(0);

  delete fsm;

  printf("program done\n");
  return 0;
}
