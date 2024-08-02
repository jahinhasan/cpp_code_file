
#include <vector>
#include <iostream>

using namespace std;

class student
{

private:
    int m[5];
    int sum;

public:
    student() : sum(0) {}
    int calculatetotalscore() const
    {
        return sum;
    }
    void input()
    {

        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
            sum += m[i];
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<student> students(n);

    for (int i = 0; i < n; i++)
    {
        students[i].input();
    }

    int kristenscore = students[0].calculatetotalscore();

    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int totalscore = students[i].calculatetotalscore();
        if (totalscore > kristenscore)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
