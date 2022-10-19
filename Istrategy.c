#include "Istrategy.h"
#include <assert.h>

static void Do_Algorithm_(struct Istrategy *me, void *data);

void Istrategy_ctor(struct Istrategy *me)
{
    static struct Istrategy_VirTable virTable = {
        &Do_Algorithm_
    };
    me->virPunt = &virTable;
}

/*Implementation of the virtual functions -  they shouldn't be called*/
static void Do_Algorithm_(struct Istrategy *me, void *data) 
{
    assert(0);  /* purely-virtual function should never be called */
}
