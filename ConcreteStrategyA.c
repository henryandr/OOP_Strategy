#include "ConcreteStrategyA.h"
#include "Istrategy.h"
#include "Context.h"
#include <stdio.h>

void Do_Algorithm_A(struct Istrategy *me, void *data);

void StrategyA_ctor(struct StrategyA *me)
{
    static struct Istrategy_VirTable virTable = {
        &Do_Algorithm_A
    };
    Istrategy_ctor(&me->super);
    me->super.virPunt = &virTable;
}

void Do_Algorithm_A(struct Istrategy *me, void *data)
{
    char *var = (char *)data;
    printf("A strategy: %s\n",var);
}