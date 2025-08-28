#include<iostream>
using namespace std;

int main()
{
    char alphabet;

    for(alphabet='a';alphabet<='z';alphabet++)     
     // alphabet 'a' apni ASCII VALUE lekar increment krr k loop chaleyenga aur vo integer value aayenngi prr char datatype alphabet hee store krenga.
    {
        cout<<alphabet<<" ";    //" " it is used for space after the new alphabet.
       //or
       // COUT<<ALPHABET<<ENDL;  endl is used for new line.
    }
};