#include <iostream>
using namespace std;

class coord
{
    int x, y;

public:
    coord()
    {
        x = 0;
        y = 0;
    }
    coord(int i, int j)
    {
        x = i;
        y = j;
    }
    void get(int &i, int &j)
    {
        i = x;
        j = y;
    }
    coord operator--(int);
};

coord coord::operator--(int)
{
    x--;
    y--;
    return *this;
}

int main()
{
    coord o1(10, 11);
    int x, y;
    o1--;
    o1.get(x, y);
    cout << "x: " << x << "y: " << y << endl;
}