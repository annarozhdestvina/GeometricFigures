CC=g++
CFLAG=-std=c++17 -Werror -Wall -Wextra -fsanitize=address
SANITIZER_LFLAGS=-fsanitize=address

SOURCES=main.cpp
SOURCES+=Model/Figures/Circle/Circle.cpp
SOURCES+=Model/Figures/Triangle/Triangle.cpp
SOURCES+=Model/Figures/Square/Square.cpp

SOURCES+=Controller/Controller.cpp

SOURCES+=Model/Drawer/Line.cpp

SOURCES+=Protocol/Area.cpp

SOURCES+=View/ConsoleView.cpp

HEADERS=Model/FigureInterface.h
HEADERS+=Model/Point/Point.h
HEADERS+=Model/Figures/Circle/Circle.h
HEADERS+=Model/Figures/Triangle/Triangle.h
HEADERS+=Model/Figures/Square/Square.h

HEADERS+=Controller/Controller.h

HEADERS+=View/ConsoleView.h

HEADERS+=Protocol/Area.h
HEADERS+=Protocol/AreaInterface.h

HEADERS+=Model/Drawer/Line.h

BINARIES=$(patsubst %.cpp,%.o,$(SOURCES))

all: main.out
	./main.out

main.out: $(BINARIES)
	$(CC) $^ -o $@ $(SANITIZER_LFLAGS)

%.o: %.cpp $(HEADERS)
		$(CC) $(CFLAG) -c $< -o $@

style_google:
		-clang-format --style=Google -i *.cpp
		-clang-format --style=Google -i Model/*.cpp
		-clang-format --style=Google -i Model/*.h
		-clang-format --style=Google -i Model/*/*.cpp
		-clang-format --style=Google -i Model/*/*.h
		-clang-format --style=Google -i View/*.cpp
		-clang-format --style=Google -i View/*.h
		-clang-format --style=Google -i Controller/*.cpp
		-clang-format --style=Google -i Controller/*.h
		-clang-format --style=Google -i Protocol/*.h
		-clang-format --style=Google -i Protocol/*.cpp

style_webkit:
		-clang-format --style=WebKit -i *.cpp
		-clang-format --style=WebKit -i Model/*.cpp
		-clang-format --style=WebKit -i Model/*.h
		-clang-format --style=WebKit -i Model/*/*.cpp
		-clang-format --style=WebKit -i Model/*/*.h
		-clang-format --style=WebKit -i View/*.cpp
		-clang-format --style=WebKit -i View/*.h
		-clang-format --style=WebKit -i Controller/*.cpp
		-clang-format --style=WebKit -i Controller/*.h
		-clang-format --style=WebKit -i Protocol/*.h
		-clang-format --style=WebKit -i Protocol/*.cpp

clean:
	rm -rf *.o *.out
	rm -rf Model/*/*/*.o
	rm -rf Controller/*.o
	rm -rf View/*.o
	rm -rf Protocol/*.o