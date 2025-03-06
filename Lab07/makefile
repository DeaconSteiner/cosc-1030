CXX = g++
CFLAGS = -Wall 
SOURCES = *.cpp

.SILENT: all prog run clean

all: prog

prog: $(SOURCES)
	$(CXX) $(CFLAGS) $(SOURCES) -o prog

run: prog
	./prog

clean:
	rm prog