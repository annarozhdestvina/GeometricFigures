CC=g++
CFLAG=-std=c++17

SOURCES=main.cpp
SOURCES+=Model/Circle/Circle.cpp
SOURCES+=Model/Poligon/Poligon.cpp
SOURCES+=Model/Triangle/Triangle.cpp
SOURCES+=Model/Square/Square.cpp

HEADERS=Model/FigureInterface.h
HEADERS+=Model/Point/Point.h
HEADERS+=Model/Poligon/Poligon.h
HEADERS+=Model/Circle/Circle.h
HEADERS+=Model/Poligon/Poligon.h
HEADERS+=Model/Triangle/Triangle.h
HEADERS+=Model/Square/Square.h

BINARIES=$(patsubst %.cpp,%.o,$(SOURCES))

all: main.out
	./main.out

main.out: $(BINARIES)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
		$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -rf *.o *.out
	rm -rf Model/Circle/*.o
	rm -rf Model/Triangle/*.o
	rm -rf Model/Square/*.o
	rm -rf Model/Poligon/*.o