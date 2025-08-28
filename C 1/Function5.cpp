
// Convert 'a' ---> 'A'


#include<iostream>
using namespace std;

char convert(char name)
{
    char ans=0;
    ans=name -'a' + 'A';
    return ans;
}
int main()
{
    char name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<convert(name);
    
};




// convert 'A' ---> 'a'.

// char ans=0;
// ans=name-'A' + 'a';     -----> LOGIC