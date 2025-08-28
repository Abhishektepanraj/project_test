#include<iostream>
using namespace std;

int main()
{
    int i,n,sum;
    cout<<"enter the number: ";
    cin>>n;
    sum=0;

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }

    cout<<sum;
};