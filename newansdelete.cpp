#include <iostream>
using namespace std;

class samp
{
    int i, j;

public:
    samp(int a, int b)
    {
        i = a;
        j = b;
    }
    int get_product()
    {
        return i * j;
    }
};

int main()
{
    samp *p;

    p = new samp(6, 5);

    if (!p)
    {
        cout << "Allocated error";
        return 1;
    }

    cout << "product is : " << p->get_product() << endl;

    delete p;

    return 0;
}