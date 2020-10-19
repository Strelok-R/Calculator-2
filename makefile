all: prog

prog: TestedCalc.o Calculator.o
	g++ TestedCalc.cpp  Calculator.cpp

TestedCalc.o :
	g++ -c TestedCalc.cpp -o TestedCalc.o
Calculator.o:
	g++ -c Calculator.cpp -o Calculator.o
	
test: TestedCalc.o Calculator.o
	g++ TestedCalc.o Calculator.o 
run:
	main

runtest:
	test
	
 
