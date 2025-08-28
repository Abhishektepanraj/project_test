// #include<iostream>
// using namespace std;

// int sum(int m, int n)
// {
//     int ans=0;
//     ans = m+n;
//     return ans;
// }

// int Mul(int m, int n)
// {
//     int ans=0;
//     ans=m*n;
//     return ans;
// }

// int main()
// {
//     int a,b;
//     cout<<"Enter the first number: ";
//     cin>>a;
//     cout<<"Enter the second number: ";
//     cin>>b;
    
//     cout<<"the sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;

//     cout<<Mul(a,b);
// }



// #include<iostream>
// using namespace std;

// bool Prime(int n)
// {
//     if(n<2)
//     return 0;
//     else
//     {
//         for(int i=2;i<n;i++)
//         {
//             if(n%i==0)
//             return 0; // Not a prime number
//         }
//     }
//     return 1; // Prime number
// };


// int Factorial(int n)
// {
//     int ans=1;
//     for(int i=1;i<=n;i++)
//     {
//         ans=ans*i; 
//     }
//     return ans; // Return the factorial of n
// };

// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;

//     cout<<Prime(a)<<endl;
//     cout<<Factorial(a)<<endl;
//     cout<<Prime(b)<<endl;
//     cout<<Factorial(b)<<endl;
//     cout<<Prime(a-b)<<endl;
//     cout<<Factorial(a-b)<<endl;


// };






// #include<iostream>
// using namespace std;


// char convert(char name)
// {
//     char ans=0;
//     ans=name - 'a' + 'A'; // Convert lowercase to uppercase
//     return ans; // Return the converted character
// }

// int main()
// {
//     char name;
//     cout<<"Enter the name: ";
//     cin>>name;
//     cout<<convert(name)<<endl;
    
// }



// Armstrong Number Check in C++ 


#include<iostream>
using namespace std;


int count_digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10; // Remove the last digit
        count++; // Increment the digit count
    }
    return count; // Return the total number of digits
}

bool Armstrong(int n, int digits)
{
    int sum = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;
    int digit = count_digits(num);
    cout<< "Number of digits: " << digit << endl;
    cout<<Armstrong(num,digit) << endl;
}