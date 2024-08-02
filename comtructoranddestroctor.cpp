#include <iostream>
using namespace std;

#define size 10

class stack
{
    char stck[size];
    int tos;

public:
    stack();
    void push(char ch);
    char pop();
};

stack::stack()
{
    cout << "Constructing a stack" << endl;
    tos = 0;
}
void stack::push(char ch)
{
    if (tos == size)
    {
        cout << "Stack is Full" << endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if (tos == 0)
    {
        cout << "stack memory is empty" << endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack a1, a2;

    a1.push('a');
    a2.push('x');
    a1.push('b');
    a2.push('y');
    a1.push('c');
    a2.push('z');

    for (int i = 0; i < 3; i++)
    {
        cout << "Pop a1: " << a1.pop() << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Pop a2: " << a2.pop() << endl;
    }
}