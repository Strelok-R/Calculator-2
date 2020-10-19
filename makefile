all: prog

prog: prog.o main.o
	g++ TestedCalc.cpp  Calculator.cpp

prog.o:
	g++ -c TestedCalc.cpp -o TestedCalc.o
main.o:
	g++ -c Calculator.cpp -o Calculator.o
	
test: TestedCalc.o Calculator.o
	g++ TestedCalc.o Calculator.o 
run:
	main

runtest:
	test
	
 
