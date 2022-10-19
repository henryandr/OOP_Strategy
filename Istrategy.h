#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

struct Istrategy_VirTable;

struct Istrategy
{
    struct Istrategy_VirTable *virPunt; /*Istrategy's virtual pointer*/
    /*Here, you can include other attributes*/
};

/*Istrategy's Virtual Table*/
struct Istrategy_VirTable
{
    void (*algorithm)(struct Istrategy *me, void *data);
};

/*Istrategy functions (Strategy's Interface)*/
void Istrategy_ctor(struct Istrategy *me);

static inline void Do_Algorithm(struct Istrategy *me, void *data)
{
    return (*me->virPunt->algorithm)(me,data);
}
#endif /* ISTRATEGY_H_ */