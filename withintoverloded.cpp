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
    friend coord operator+(coord ob1, int i);
    friend coord operator+(int i, coord ob1);
};

coord operator+(coord ob1, int i)
{
    coord temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    return temp;
}
coord operator+(int i, coord ob1)
{
    coord temp;
    temp.x = i + ob1.x;
    temp.y = i + ob1.y;
    return temp;
}

int main()
{
    coord o1(10, 10);
    int x, y;

    // o1 = o1 + 10;
    // o1.get(x, y);
    // cout << "X: " << x << " Y: " << y << endl;
    o1 = 10 + o1;
    o1.get(x, y);
    cout << "X: " << x << " Y: " << y << endl;
}