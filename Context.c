#include "Context.h"
#include "Istrategy.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//Rectangle's prototypes of its virtual functions
//static void Do_Algorithm_(struct Istrategy *me, void *data);

/* Context's prototype of its virtual function */
/* NOTE: the "me" pointer has the type of the superclass to fit the virtable */
void Context_Ctor(struct Context *me, struct Istrategy *_strategy)
{
    me->super = _strategy;
}

void Set_Strategy(struct Context *me, struct Istrategy *_strategy)
{
    me->super = _strategy;
}

void Do_Some_Business(struct Context *me)
{
    printf("Sorting data using the strategy (not sure how it'll do it!)\n");
    struct Istrategy *_strategy = me->super;
    char data[] = "Estamos relocos";
    Do_Algorithm(_strategy,data);
}


