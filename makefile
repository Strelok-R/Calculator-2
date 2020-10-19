all: Hello

Hello: Calculator.o  TestedCalc.o
      gcc -o Hello  Calculator.cpp TestedCalc.cpp
