all: make
main.o : Calcualtor.c Calculator2.h TestedCalc.cpp
      gcc -o Calcualtor.c -o Calculator2.h -o TestedCalc.cpp
