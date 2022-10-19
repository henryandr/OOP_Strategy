#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H
#include "Istrategy.h"

struct StrategyB{
    struct Istrategy super;
};

void StrategyB_ctor(struct StrategyB *me);

#endif