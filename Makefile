# Test makefile to simulate the build process and the the unit testing framework
# should put headers in include/ directory
# and tests in unit_tests/ directory?
# specify the compiler
CC = g++
# add cflags
CFLAGS = -c -Wall
EXECUTABLE = battleship.exe
EXECUTABLETEST = unit_test.exe
VPATH = src:tests
SRCDIR = src
TESTDIR = tests

all: main
	
main: main.o Grid.o Ship.o Fleet.o
	$(CC) main.o Grid.o Ship.o Fleet.o -o $(EXECUTABLE)

main.o: main.cpp
	$(CC) -I$(SRCDIR) $(CFLAGS) src/main.cpp

Grid.o: Grid.cpp
	$(CC) -I$(SRCDIR) $(CFLAGS) src/Grid.cpp

Ship.o: Ship.cpp
	$(CC) -I$(SRCDIR) $(CFLAGS) src/Ship.cpp

Fleet.o: Fleet.cpp
	$(CC) -I$(SRCDIR) $(CFLAGS) src/Fleet.cpp

unit_test:
	$(CC) -I$(SRCDIR) -I$(TESTDIR) tests/mainTest.cpp tests/GridTest.cpp src/Grid.cpp tests/ShipTest.cpp src/Ship.cpp tests/FleetTest.cpp src/Fleet.cpp -o $(EXECUTABLETEST)

clean:
	rm -rf *.o $(EXECUTABLE)

clean_all:
	rm -rf *.o $(EXECUTABLE) $(EXECUTABLETEST)
