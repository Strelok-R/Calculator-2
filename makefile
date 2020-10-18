all: prog

prog: Calculator.o TestedCalc.o Calculator2.o
      gcc Calculator.cpp TestedCalc.cpp Calculator2.h
