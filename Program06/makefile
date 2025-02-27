CXX = g++
CFLAGS = -Wall -I./include
SOURCES = ./src/*.cpp

all: prog

prog: $(SOURCES)
	$(CXX) $(CFLAGS) $(SOURCES) -o prog



run: prog
	./prog

clean:
	rm prog
