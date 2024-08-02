#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 1);

    cout << "Size - " << v.size() << endl;
    cout << "Orginal array" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << endl;

    vector<int>::iterator p = v.begin();
    p += 2; // point to 3rd element

    v.insert(p, 10, 9);

    cout << "size after insertion -" << v.size() << endl;
    cout << "After insert:" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;

    p = v.begin();
    p += 2;
    v.erase(p, p + 10);

    cout << "size after deletation -" << v.size() << endl;
    cout << "After delete:" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}