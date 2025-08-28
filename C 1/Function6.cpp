// #include<iostream>
// #include<cmath>
// using namespace std;

// int countdigit(int n)
// {
//     int count=0;
//     while(n>0)
//     {
//         count++;
//         n/=10;
//     }
//     return count;
// }

// bool Armstrong(int num,int digit)
// {
//     int n=num,ans=0,rem;
//     while(n>0)
//     {
//         rem=n%10;
//         n/=10;  // n=n/10;
//         ans=ans + pow(rem,digit);
//     };

//     if(ans==num)
//     return 1;
//     else
//     return 0;
// };

// int main()
// {
//     int num;
//     cin>>num;
//     //Count Digit
//     int digit = countdigit(num);
//     // cout<<"Number of digit in "<<num<<" is "<<digit<<endl;
//     //check the number is Armstrong or not !
//     cout<<Armstrong(num,digit);
// }


















#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while (n > 0) {
        rem = n % 10;
        n /= 10;
        ans += static_cast<int>(round(pow(rem, digit))); // Fixing floating-point issue
    }

    return ans == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers cannot be Armstrong numbers!" << endl;
        return 0;
    }

    int digit = countdigit(num);
    
    if (Armstrong(num, digit)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
