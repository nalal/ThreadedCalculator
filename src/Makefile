main: prep main.o
	g++ build/main.o -lpthread -o bin/calc

prep:
	mkdir -p bin build

main.o: main.cpp main.h
	g++ -c main.cpp -o build/main.o
