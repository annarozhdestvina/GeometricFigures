#include <vector>
#include <iostream>

#include "../../Protocol/AreaInterface.h"
#include "Area.h"

Area::Area(int rows /*= 32*/, int cols /*= 72*/): _rows{rows}, _cols{cols} {
    _area.resize(_rows);
    for(std::vector<char>& line : _area)
        line.resize(_cols, '.');
}

void Area::Print() const {
    for(const std::vector<char>& line : _area) {
        for(char i : line)
            std::cout << i << ' ';
        std::cout << '\n';
    }
}

int Area::GetRows() const {
    return _rows;
}

int Area::GetCols() const {
    return _cols;
}

char& Area::Get(int row, int col)  {
    assert(row < _area.size() && "row is out range" );

    if(_area.size())
        assert(col < _area[0].size() && "col is out range" ); 

    return _area[row][col];
}

char Area::Get(int row, int col) const {
    assert(row < _area.size() && "row is out range" );

    if(_area.size())
        assert(col < _area[0].size() && "col is out range" ); 

    return _area[row][col];
}

void Area::Clean() {
    for(std::vector<char>& line : _area) 
        for(char& i : line)
            i = '.';
}


