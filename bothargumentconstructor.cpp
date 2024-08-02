#include <iostream>
using namespace std;

class base
{
    int i;

public:
    base(int n)
    {
        cout << "constructing base class\n";
        i = n;
    }
    ~base() { cout << "distructing base class"; }
    void showi() { cout << i << endl; }
};

class derived : public base
{
    int j;

public:
    derived(int m) : base(m)
    {
        cout << "constructing derived class\n";
        j = 0;
    }
    ~derived() { cout << "destricting derived class\n"; }
    void showj() { cout << j << endl; }
};

int main()
{
    derived o(2000);

    o.showi();
    o.showj();
}