all: prog

prog: TestCalc.o Calculator.o Calculator.o
      g++ TestCalc.cpp Calcualtor.h Calculator.cpp
