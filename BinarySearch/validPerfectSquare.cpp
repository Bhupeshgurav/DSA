#include <iostream>
using namespace std;

bool isPerfectSquare(int num)
{
    long int s = 1;
    long int e = num;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (mid * mid == num)
        {
            return true;
        }

        else if (mid * mid > num)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return false;
}

int main()
{
    cout << isPerfectSquare(16);
}