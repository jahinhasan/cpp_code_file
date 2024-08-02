#include <iostream>
#include <cstdlib>
using namespace std;

class aray
{
    int *p;
    int size;

public:
    aray(int sz)
    {
        p = new int(sz);
        if (!p)
            exit(1);
        size = sz;
        cout << "using normal constructor" << endl;
    }
    ~aray()
    {
        delete[] p;
    }

    // copy constructor
    aray(const aray &a);

    void put(int i, int j)
    {
        if (i >= 0 && i < size)
            p[i] = j;
    }
    int get(int i)
    {
        return p[i];
    }
};

aray::aray(const aray &a)
{
    p = new int[a.size];
    size = a.size;
    if (!p)
        exit(1);
    for (int i = 0; i < a.size; i++)
    {
        p[i] = a.p[i];
    }
    cout << "using copy constructor" << endl;
}

int main()
{
    aray num(10);

    for (int i = 0; i < 10; i++)
    {
        num.put(i, i);
    }

    for (int i = 10; i > 0; i--)
        cout << num.get(i);
    cout << endl;

    aray x = num;

    for (int i = 0; i < 10; i++)
        cout << x.get(i);
}