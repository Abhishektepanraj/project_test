#include<iostream>
using namespace std;

int main()
{
    char name;

    cout<<"enter the alpabet: ";
    cin>>name;

    if(name=='a'||name=='e'||name=='i'||name=='o'|name=='u')            // OR(||) LOGICAL OPERATOR.---> Mean ki inme se ek bhi aayenga toh condition true ho jayengi.
    {
        cout<<"vowels";
    }
    else
    {
        cout<<"consonants";
    }

    return 0;
    
};