#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the value of c: ";
    cin>>c;

    //AND(&&) logical operator.---> Mean inme se ek bhi condition false hui toh puri condition false ho jayengi.
     
     if(a>b && a>c)
     {
        cout<<"yes";
     }
     else{
        cout<<"no";
     }

     return 0;

};