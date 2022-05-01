#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num)
{
    int ans = 0;
    // first we will have to take out the digits individually and then apply the formula - ans = (10*ans) + digit

    while (num != 0) // o(n)
    {
        int digit = num % 10;
        if (ans < INT_MIN / 10 || ans > INT_MAX / 10) // edge case if (ans*10) goes above INT_MIN AND INT_MAX return 0
            return 0;
        ans = (10 * ans) + digit; // individual numbers to convert into a whole set to make a single number. eg 3,2,1 = 321
        num = num / 10;
    }

    return ans;
}

int main()
{
    int a = reverseNumber(12);
    cout << a;
}