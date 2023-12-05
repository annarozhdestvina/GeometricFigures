#ifndef AREA_H
#define AREA_H

#include <iostream>
#include <vector>

#include "AreaInterface.h"

namespace protocol {

class Area : public AreaInterface {
    using Plot2D_t = std::vector<std::vector<char>>;

private:
    int _rows;
    int _cols;
    Plot2D_t _area;

public:
    Area(int rows = 32, int cols = 72);

    void Print() const;

    int GetRows() const override;

    int GetCols() const override;

    char& Get(int row, int col) override;

    char Get(int row, int col) const override;

    void Clean() override;
};

} // namespace protocol

#endif // AREA_H