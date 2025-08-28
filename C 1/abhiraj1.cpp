// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b,c;
//     cin>>a>>b;
//     c=a+b;
//     cout<<c;
// };



#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age,roll_number;
    string grade;
}; 

int main()
{
    Student S1;
    S1.name = "Abhishek";
    S1.age = 23;
    S1.roll_number = 101;
    S1.grade = "A";

    cout << "Name: " << S1.name << endl;

    cout<<"Abhi loves Purva"<<endl;

     Student S2;
    S2.name = "Purva";
    S2.age = 21;
    S2.roll_number = 102;
    S2.grade = "A+";

    cout << "Name: " << S2.name << endl;

}