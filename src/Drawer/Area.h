#ifndef AREA_H
#define AREA_H

#include <vector>
#include <iostream>


class Area {
    using Plot2D_t = std::vector<std::vector<char> >;

private:
    int _rows;
    int _cols;
    Plot2D_t _area;

public:
    Area(int rows = 32, int cols = 72): _rows{rows}, _cols{cols} {
        _area.resize(_rows);
        for(std::vector<char>& line : _area)
            line.resize(_cols, ' ');
    }

    void Print() const {
        for(const std::vector<char>& line : _area) {
            for(char i : line)
                std::cout << i << ' ';
            std::cout << '\n';
        }
    }

    int GetRows() const {
        return _rows;
    }

    int GetCols() const {
        return _cols;
    }

    Plot2D_t& Get() {
        return _area;
    }
};

#endif // AREA_H