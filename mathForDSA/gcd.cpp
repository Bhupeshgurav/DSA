// TC: O(N)
// SC: O(1)
#include <iostream>
using namespace std;

// void gcd(int a, int b)
// {
//     while ((a % b) > 0)
//     {
//         int temp = a;
//         a = b;
//         b = temp % b;
//     }
//     cout << b;
// }

// Recursive way
int gcd(int a, int b)
{

    // BASE CASE
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

// void gcd(int a, int b)
// {
//     if (a == 0)
//         cout << b;
//     if (b == 0)
//         cout << a;
//     while (a != b)
//     {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
//     cout << a;
// }

int main()
{
    int a = 108;
    int b = 48;
    cout << gcd(a, b);
}
