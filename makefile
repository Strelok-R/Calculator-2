all: prog

prog: 
	g++ TestedCalc.cpp  Calculator.cpp

TestedCalc.o :
	g++ -c TestedCalc.cpp -o TestedCalc.o
Calculator.o:
	g++ -c Calculator.cpp -o Calculator.o
	
test: 
	g++ TestedCalc.o -o test
TestedCalc.o:
	g++ test.cpp -o test.o
run:
	prog

runtest:
	test
clean:
	rm -f .o
	rm -f prog
	
 
