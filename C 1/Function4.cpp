#include<iostream>
using namespace std;

void swap(int &a,int &b,int c)
{
    c=a;
    a=b;
    b=c;
}

int main()
{
    int p,q;
    cin>>p>>q;
    swap(p,q);
}
