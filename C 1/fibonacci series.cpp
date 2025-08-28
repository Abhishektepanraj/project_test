#include<iostream>
using namespace std;

int main()
{
    int a,b,c,n;
    a=0,b=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
    c=a+b;
    a=b;
    b=c; 
    cout<<c<<" ";
    }
        
    return 0;
};


// #include <iostream>
// #include <vector>

// int cycleSize(int n) {
//     int cycle = 1;
//     while (n != 1) {
//         if (n % 2 == 0) { // if even
//             n = n / 2;
//         } else { // if odd
//             n = 3 * n + 1;
//         }
//         ++cycle;
//     }
//     return cycle;
// }

// int main() {
//     int a, b; // input variables
//     while (std::cin >> a >> b) {
//         int maxCycle = 0;
//         for (int i = a; i <= b; i++) {
//             int thisCycleSize = cycleSize(i);
//             if (thisCycleSize > maxCycle) {
//                 maxCycle = thisCycleSize;
//             }
//         }
//         std::cout << a << " " << b << " " << maxCycle << std::endl;
//     }
//     return 0;
// }
