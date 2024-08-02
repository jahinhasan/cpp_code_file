#include <iostream>
using namespace std;

class b1
{
    int a;

public:
    b1(int x) { a = x; }
    int geta() { return a; }
};

class b2
{
    int b;

public:
    b2(int y) { b = y; }
    int getb() { return b; }
};

class D : public b1, public b2
{
    int c;

public:
    D(int x, int y, int z) : b1(z), b2(y)
    {
        c = x;
    }
    void show()
    {
        cout << geta() << getb() << c << endl;
    }
};

int main()
{
    D ob(1, 2, 3);
    ob.show();
}
