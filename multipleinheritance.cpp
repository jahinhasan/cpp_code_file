#include <iostream>
using namespace std;

class b1
{
    int a;

public:
    b1(int n) { a = n; }
    int geta() { return a; }
};

class d1 : public b1
{
    int b;

public:
    d1(int n, int m) : b1(n)
    {
        b = m;
    }
    int getb() { return b; }
};

class d2 : public d1
{
    int c;

public:
    d2(int n, int m, int p) : d1(p, m)
    {
        c = n;
    }
    void show()
    {
        cout << geta() << getb() << c << endl;
    }
};

int main()
{
    d2 ob(1, 2, 3);

    ob.show();
    cout << ob.geta() << " " << ob.getb();
}