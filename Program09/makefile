CXX = g++
CFLAGS = -Wall -I./include
SOURCES = ./src/*.cpp

.SILENT: all prog run clean

all: prog

prog: $(SOURCES)
	$(CXX) $(CFLAGS) $(SOURCES) -o prog



run: prog
	./prog

clean:
	rm prog