#include <iostream>
using namespace std;

class base
{
public:
    int i;
};

class d1 : public base
{
public:
    int j;
};

class d2 : public base
{
public:
    int k;
};

class d3 : public d1, public d2
{
public:
    int product() { return i * j * k; }
};

int main()
{

    d3 ob;

    ob.i = 10;
    ob.j = 2;
    ob.k = 2;

    cout << ob.product();
}
