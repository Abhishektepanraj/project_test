#include<iostream>
using namespace std;

// int sum(int m,int n)
// {
//     int ans=0;
//     ans=m+n;
//     return ans;
// };

int Multi(int m,int n)
{
    int ans=0;
    ans=m*n;
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    // cout<<"Enter the third number: ";
    // cin>>c;
    // cout<<"Enter the fourth number: ";
    // cin>>d;
    // cout<<sum(a,b)<<endl;
    // cout<<sum(c,d)<<endl;

    cout<<"The MUltiplication is : "<<Multi(a,b)<<endl;

};