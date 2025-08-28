//Add Digit ----> Leetcode problem no. 258.


#include<iostream>
using namespace std;

int main()
{
    int num,rem,ans=0;
    // cout<<"Enter the number: ";
    // cin>>num;

    while(num>9)
    {

    while(num!=0)
    {
        rem=num%10;
        num=num/10;        //num/=10;
        ans+=rem;
    }
          num=ans;
    }
     return num;
};