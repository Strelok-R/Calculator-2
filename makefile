CC=clang

all: prog

prog: Calculator.o Calculator2.o
      gcc Calculator.o Calculator2.o -Calc.exe
Calculator.o:
      gcc -c Calculator.cpp -o Calculator.o
Calculator2.o:
      gcc -Calculator2.h -Calculator2.o
test: test/Calculator.o test/Calculator2.o       
      gcc test/Calculator.o Calculator2.o -o Calc.exe
runtest:
     Calc.exe
