#include <iostream>
using namespace std;

class myclass
{
    int x;

public:
    myclass()
    {
        x = 0;
    }
    myclass(int n)
    {
        x = n;
    }
    void setx(int n)
    {
        x = n;
    }
    int getx()
    {
        return x;
    }
};

int main()
{
    myclass *p;
    myclass ob(10);

    p = new myclass[10];
    if (!p)
    {
        cout << "allocated error";
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        p[i] = ob;
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << "p[" << i << "]: " << p[i].getx();
        cout << endl;
    }
}
