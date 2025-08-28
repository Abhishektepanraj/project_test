#include<iostream>
using namespace std;

bool Prime(int n)
{
    if(n<=1)  // n<2
    return 0; 

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int Factorial(int n)
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
    cout<<Prime(a)<<endl;
    cout<<Factorial(a)<<endl;
    cout<<Prime(b)<<endl;
    cout<<Factorial(b)<<endl;
    cout<<Prime(a-b)<<endl;
    cout<<Factorial(a-b)<<endl;

    return 0;
}