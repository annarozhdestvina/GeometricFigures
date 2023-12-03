#ifndef AREA_H
#define AREA_H

#include <vector>
#include <iostream>

#include "../../Protocol/AreaInterface.h"


class Area : public AreaInterface {
    using Plot2D_t = std::vector<std::vector<char> >;

private:
    int _rows;
    int _cols;
    Plot2D_t _area;

public:
    Area(int rows = 32, int cols = 72): _rows{rows}, _cols{cols} {
        _area.resize(_rows);
        for(std::vector<char>& line : _area)
            line.resize(_cols, '.');
    }

    void Print() const {
        for(const std::vector<char>& line : _area) {
            for(char i : line)
                std::cout << i << ' ';
            std::cout << '\n';
        }
    }

    int GetRows() const override {
        return _rows;
    }

    int GetCols() const override {
        return _cols;
    }

    char& Get(int row, int col) override {
        assert(row < _area.size() && "row is out range" );

        if(_area.size())
            assert(col < _area[0].size() && "col is out range" ); 

        return _area[row][col];
    }

    char Get(int row, int col) const override{
        assert(row < _area.size() && "row is out range" );

        if(_area.size())
            assert(col < _area[0].size() && "col is out range" ); 

        return _area[row][col];
    }

    void Clean() override {
        for(std::vector<char>& line : _area) 
            for(char& i : line)
                i = '.';
    }
};

#endif // AREA_H