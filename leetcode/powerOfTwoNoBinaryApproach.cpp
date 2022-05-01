#include <iostream>
#include <math.h>
using namespace std;

bool powerOfTwo(int num)
{
    if (num <= 0)
        return false;
    int i = 0;
    int n = 0;
    while (n < num) // o(n)
    {
        n = pow(2, i);
        if (n == num)
            return true;
        i++;
    }
    if (n == num)
        return true;
    else
        return false;
}
int main()
{
    bool a = powerOfTwo(16);
    cout << a;
}