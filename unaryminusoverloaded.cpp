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
    coord operator-(coord ob2);
    coord operator-();
};

coord coord::operator-(coord ob2)
{
    coord temp;

    temp.x = x - ob2.x;
    temp.y = y - ob2.y;

    return temp;
}
coord coord::operator-()
{
    x = -x;
    y = -y;

    return *this;
}

int main()
{
    coord o1(10, 11), o2(5, 3), o3;
    int x, y;
    o3 = o1 - o2;

    o3.get(x, y);
    cout << "x: " << x << "y: " << y << endl;

    o1 = -o1;
    o1.get(x, y);
    cout << "x: " << x << "y: " << y << endl;
}