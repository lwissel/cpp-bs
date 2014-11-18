# Test makefile to simulate the build process and the the unit testing framework
# should put headers in include/ directory
# and tests in unit_tests/ directory?
# specify the compiler
CC = g++
# add cflags
CFLAGS = -c Wall
EXECUTABLE = main.exe
all: main
	
main: main.o square.o
	$(CC) main.o square.o -o $(EXECUTABLE)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

square.o: square.cpp
	$(CC) $(CFLAGS) square.cpp

unit_test:
	$(CC) test1.cpp testcase1.cpp testcase2.cpp square.cpp -o unit_test.exe

clean:
	rm -rf *.o main.exe

clean_all:
	rm -rf *.o main.exe unit_test.exe
