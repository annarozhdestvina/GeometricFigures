CC=g++
CFLAG=-std=c++17

SOURCES=main.cpp
SOURCES+=Circle/Circle.cpp
SOURCES+=Poligon/Poligon.cpp
SOURCES+=Triangle/Triangle.cpp
SOURCES+=Square/Square.cpp

HEADERS=FigureInterface.h
HEADERS+=Point/Point.h
HEADERS+=Poligon/Poligon.h
HEADERS+=Circle/Circle.h
HEADERS+=Poligon/Poligon.h
HEADERS+=Triangle/Triangle.h
HEADERS+=Square/Square.h

BINARIES=$(patsubst %.cpp,%.o,$(SOURCES))

all: main.out
	./main.out

main.out: $(BINARIES)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
		$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -rf *.o *.out
	rm -rf Circle/*.o
	rm -rf Triangle/*.o
	rm -rf Square/*.o
	rm -rf Poligon/*.o