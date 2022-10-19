#include "ConcreteStrategyB.h"
#include "ConcreteStrategyA.h"
#include "Istrategy.h"
#include "Context.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //char Array[] = "Estamos locos";
    struct Context _context;
    struct StrategyA _strategyA;
    StrategyA_ctor(&_strategyA);
    Context_Ctor(&_context, (struct Istrategy *)&_strategyA);

    Do_Some_Business(&_context);

    struct StrategyB _strategyB;
    StrategyB_ctor(&_strategyB);

    Set_Strategy(&_context,(struct Istrategy *)&_strategyB);
    Do_Some_Business(&_context);

    return 0;
}
