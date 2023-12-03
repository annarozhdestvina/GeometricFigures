#ifndef AREAINTERFACE_H
#define AREAINTERFACE_H

class AreaInterface {
public:
    virtual int GetRows() const = 0;
    virtual int GetCols() const = 0;

    virtual char Get(int row, int col) const = 0;
    virtual char& Get(int row, int col) = 0;

    virtual void Clean() = 0;
};

#endif // AREAINTERFACE_H