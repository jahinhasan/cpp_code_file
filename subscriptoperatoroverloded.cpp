#include <iostream>
using namespace std;

class arraytype
{
    int a[5];

public:
    arraytype()
    {
        for (int i = 0; i < 5; i++)
        {
            a[i] = i;
        }
    }
    int &operator[](int i)
    {
        return a[i];
    }
};

int main()
{
    arraytype ob;

    for (int i = 0; i < 5; i++)
    {
        cout << ob[i] << " ";
    }
    return 0;
}