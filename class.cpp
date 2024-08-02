#include <iostream>
using namespace std;

class myclass
{
public:
    void mymathod();
};

void myclass::mymathod()
{
    cout << "Hello World!";
}

int main()
{
    myclass obj;

    obj.mymathod();
}