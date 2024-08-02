#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int divide = n % 10;
        reverse = reverse * 10 + divide;
        n = n / 10;
    }

    cout << reverse;
}