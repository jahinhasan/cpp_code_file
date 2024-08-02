#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define size 225
class strtype
{
    char *p;
    int len;

public:
    strtype();
    ~strtype();
    void set(char *ptr);
    void show();
};

strtype::strtype()
{
    p = (char *)malloc(size);
    if (!p)
    {
        cout << "Allocation error" << endl;
        *p = '\0';
        len = 0;
    }
}

strtype::~strtype()
{
    cout << "freeing p" << endl;
    free(p);
}

void strtype::set(char *ptr)
{
    if (strlen(p) >= size)
    {
        cout << "string is too big" << endl;
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}

void strtype::show()
{
    cout << p << " - lenth " << len << endl;
}

int main()
{
    strtype s1, s2;

    s1.set("this is a test.");
    s2.set("I like c++.");

    s1.show();
    s2.show();

    return 0;
}