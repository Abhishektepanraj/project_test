#include<iostream>
using namespace std;

int main()
{
    int i=1,n;  // i ko initialize kiya.
    
    cout<<"Enter the number: ";    // user se input liya.
    cin>>n;

    while(i<=n)  // break condition.
    {
        cout<<i<<" ";
        i++;     // update or increment hua.
    }

    return 0;

};