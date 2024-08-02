#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void printstd()
    {
        cout << "name: " << name << "\n";
        cout << "age: " << age << "\n";
        cout << "gender: " << (gender ? "Male" : "Female") << "\n";
    }
};

int main()
{
    student arr[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "name: ";
        cin >> arr[i].name;
        cout << "age: ";
        cin >> arr[i].age;
        cout << "gender (0 for Female, 1 for Male): ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printstd();
    }

    return 0;
}
