all: prog

prog: 
	g++ TestedCalc.o  Calculator.o -o prog

TestedCalc.o :
	g++ -c TestedCalc.cpp -o TestedCalc.o

Calculator.o:
	g++ -c Calculator.cpp -o Calculator.o
	
test: Calculator.o test.o cathc.hpp
	g++ test.o Calculator.o -o test

test.o: 
	g++ -c test.cpp -o test.o 
	
run:
	prog

runtest:
	test

	
 
