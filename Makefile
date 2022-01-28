all:program
	
program: main.o HanoiStack.o
	g++ -std=c++11 -o program main.o HanoiStack.o
main.o: main.cpp HanoiStack.h
	g++ -std=c++11 -c main.cpp
HanoiStack.o: HanoiStack.cpp
	g++ -std=c++11 -c HanoiStack.cpp
