#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student
{
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int a) { age = a; }
    void set_standard(int b) { standard = b; }
    void set_first_name(string fname) { first_name = fname; }
    void set_lest_name(string lname) { last_name = lname; }

    int get_age() { return age; }
    int get_standard() { return standard; }
    string get_first_name() { return first_name; }
    string get_lest_name() { return last_name; }

    string to_string()
    {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> standard >> first_name >> last_name;

    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_lest_name(last_name);

    cout << st.get_age() << endl;
    cout << st.get_lest_name() << "," << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << "\n";
    cout << st.to_string();

    return 0;
}
