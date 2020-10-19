all: prog

prog: 
	g++ TestedCalc.o  Calculator.o cathc.o -o prog  

TestedCalc.o :
	g++ -c TestedCalc.cpp -o TestedCalc.o cathc.o

Calculator.o:
	g++ -c Calculator.cpp -o Calculator.o -c cathc.o -cathc.hpp
	
test: Calculator.o test.o cathc.hpp
	g++ test.o Calculator.o -o test

test.o: 
	g++ -c test.cpp -o test.o 
	
run:
	prog

runtest:
	test
