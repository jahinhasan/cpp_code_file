#include <iostream>
using namespace std;

class samp
{
    int i, j;

public:
    void set_ij(int a, int b)
    {
        i = a;
        j = b;
    }

    int get_ij()
    {
        return i * j;
    }
};

int main()
{

    samp *p;

    p = new samp[10];

    if (!p)
    {
        cout << "allocation error" << endl;
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        p[i].set_ij(i, i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Product [" << i << "] is : ";
        cout << p[i].get_ij() << endl;
    }
    delete[] p;
    return 0;
}