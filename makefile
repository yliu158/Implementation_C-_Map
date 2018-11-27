CPPFLAGS= -Wall -Wextra -pedantic

all: Map.cpp Map.hpp test-kec.cpp
	g++ -std=c++11 test-kec.cpp -o test

run:
	./test

checkmem:
	valgrind --leak-check=yes -v ./test

clean:
	-rm test
