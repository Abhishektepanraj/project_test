#include<iostream>
using namespace std;

// void fun()
// {
//     cout<<"Hello Coder Army\n";
// }

//  int main()
//  {
//      fun();
//  }

int Factorial(int n =3)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;  // ans=ans*i;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<Factorial();
}