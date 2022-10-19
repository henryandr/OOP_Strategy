#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H
#include "Istrategy.h"

struct StrategyA{
    struct Istrategy super;
};

void StrategyA_ctor(struct StrategyA *me);

#endif