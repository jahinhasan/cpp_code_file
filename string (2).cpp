#include<iostream>
#include<string>
using namespace std;

int main()
{
     string greeting ="hello\n";
     string fname = "jahin";
     string  lname = "hasan";
         cout<<greeting;
         string fullname = fname.append(lname);
         cout<<"i am "<<fullname <<" "<<fullname.length();
}