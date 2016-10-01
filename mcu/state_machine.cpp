#include "state_machine.h"
#include <stdio.h>


CStateMachine::CStateMachine( std::vector<std::vector<unsigned int>> lambda, std::vector<unsigned int> delta)
{
  state = 0;
  this->lambda = lambda;
  this->delta = delta;
}

CStateMachine::~CStateMachine()
{

}

void CStateMachine::process(unsigned int input)
{
  if ( (state < lambda.size()) && (input < lambda[0].size()) )
    state = lambda[state][input];
  else
  {
    printf("wrong state/input value [%u][%u]\n", state, input);
  }
}

unsigned int CStateMachine::get()
{
  return delta[state];
}
