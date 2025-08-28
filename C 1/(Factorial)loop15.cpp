#include<iostream>
using namespace std;

int main()
{
    int factorial,n,i;
    factorial=1;
    cout<<"enter the number whose factorial you want to find: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
};