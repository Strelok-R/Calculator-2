all: make
main.o : Calcualtor.c  TestedCalc.cpp
      gcc -o Calcualtor.c  -o TestedCalc.cpp
      
clean:
      rm -f Calcualtor.c TestedCalc.cpp
      
install:   Calcualtor
      cp Calculator /user/local/bin/
