#ifndef _STATE_MACHINE_H_
#define _STATE_MACHINE_H_

#include <vector>

class CStateMachine
{
  private:

    unsigned int state;
    std::vector<std::vector<unsigned int>> lambda;
    std::vector<unsigned int> delta;

  public:
    CStateMachine( std::vector<std::vector<unsigned int>> lambda, std::vector<unsigned int> delta);
    ~CStateMachine();

    void process(unsigned int input);
    unsigned int get();
};


#endif
