#include<iostream>
using namespace std;

int main()
{
    int n,sum;                   // yaha 1st method lgate time 'i' bhi lgana hai kyunki loop mein hai.
    cout<<"enter the number: ";
    cin>>n;

   // sum=0;

   // for(i=1;i<=n;i++)
    //{
      //  sum=i+sum;
   // }
   // cout<<sum;




    sum=n*(n+1)/2;
    cout<<sum;


};