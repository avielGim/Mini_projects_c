AR=ar
OBJECTS_MAIN=main.o
OBJECTS_Bank=myBank.o
FLAGS= -Wall -g

all: mains
mains: main.o libmyBank.a
	gcc $(FLAGS) -o mains main.o libmyBank.a
libmyBank.a: $(OBJECT_Bank) 
	$(AR) -rcs libmyBank.a $(OBJECT_Bank)
main.o: main.c myBank.h
	gcc $(FLAGS) -c main.c
myBank.o: myBank.c myBank.h
	gcc $(FlagS) -c myBank.c

.PHONY: clean all

clean:
	rm -f *.o *.a mains
