all: prog

prog: TestCalc.o Calculator.o
      g++ TestCalc.cpp  Calculator.cpp
