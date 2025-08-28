#include<iostream>
using namespace std;
int main()
{
    // int x,y,z;
    // cin>>x;
    // cin>>y;
    // cout<<x+y;

    int row, col;

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    return 0;

};