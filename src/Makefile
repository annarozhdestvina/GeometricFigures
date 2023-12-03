CC=g++
CFLAG=-std=c++17

SOURCES=main.cpp
SOURCES+=Model/Circle/Circle.cpp
SOURCES+=Model/Poligon/Poligon.cpp
SOURCES+=Model/Triangle/Triangle.cpp
SOURCES+=Model/Square/Square.cpp

SOURCES+=Controller/Controller.cpp

SOURCES+=Model/Drawer/Line.cpp
SOURCES+=Model/Drawer/Area.cpp

SOURCES+=View/ConsoleView.cpp

HEADERS=Model/FigureInterface.h
HEADERS+=Model/Point/Point.h
HEADERS+=Model/Poligon/Poligon.h
HEADERS+=Model/Circle/Circle.h
HEADERS+=Model/Poligon/Poligon.h
HEADERS+=Model/Triangle/Triangle.h
HEADERS+=Model/Square/Square.h

HEADERS+=Controller/Controller.h

HEADERS+=View/ConsoleView.h

HEADERS+=Model/Drawer/Area.h
HEADERS+=Model/Drawer/Line.h

BINARIES=$(patsubst %.cpp,%.o,$(SOURCES))

all: main.out
	./main.out

main.out: $(BINARIES)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
		$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -rf *.o *.out
	rm -rf Model/*/*.o
	rm -rf Controller/*.o
	rm -rf View/*.o