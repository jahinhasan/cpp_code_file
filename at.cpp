#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystring = "hello";
    cout << "orginal string: " << mystring << "\n";
    cout << "first character: " << mystring.at(0) << "\n";
    cout << "second character: " << mystring.at(1) << "\n";
    cout << "last character: " << mystring.at(mystring.length() - 1) << "\n";

    mystring.at(0) = 'j';
    cout << "change string: " << mystring;
}