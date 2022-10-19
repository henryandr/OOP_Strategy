#ifndef CONTEXT_H_
#define CONTEXT_H_
#include "Istrategy.h"

struct Context
{
    struct Istrategy *super; /*Implementation of the interface*/
};

void Context_Ctor(struct Context *me, struct Istrategy *_strategy);
void Set_Strategy(struct Context *me, struct Istrategy *_strategy);
void Do_Some_Business(struct Context *me);
#endif
