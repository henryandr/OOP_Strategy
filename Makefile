OBJS = main.o Istrategy.o Context.o ConcreteStrategyA.o ConcreteStrategyB.o 
BINARY = main
CFLAGS = -g -Wall
LDFLAGS = -lm

main: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)

main.o: main.c Istrategy.h Context.h ConcreteStrategyA.h ConcreteStrategyB.h
Istrategy.o: Istrategy.c Istrategy.h
Context.o: Context.c Context.h Istrategy.h
ConcreteStrategyA.o: ConcreteStrategyA.c ConcreteStrategyA.h Istrategy.h
ConcreteStrategyB.o: ConcreteStrategyB.c ConcreteStrategyB.h Istrategy.h

clean:
	rm -f $(BINARY) $(OBJS)