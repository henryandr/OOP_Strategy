#include "ConcreteStrategyB.h"
#include "Istrategy.h"
#include "Context.h"
#include <stdio.h>

static void Do_Algorithm_B(struct Istrategy *me, void *data);

void StrategyB_ctor(struct StrategyB *me)
{
    static struct Istrategy_VirTable virTable = {
        &Do_Algorithm_B
    };
    Istrategy_ctor(&me->super);
    me->super.virPunt = &virTable;
}

static void Do_Algorithm_B(struct Istrategy *me, void *data)
{
    char *var = (char *)data;
    printf("Lo mismo, pero alrevés: %s\n",var);
}