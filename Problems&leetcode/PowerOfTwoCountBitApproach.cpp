#include <iostream>
using namespace std;

void powerOfTwo(int num)
{
    int count = 0;

    if (num <= 0)
        cout << "It is not a power of two";

    while (num != 0)
    {
        // check last bit
        int ans = num & 1;
        if (ans == 1)
        {

            count++;
        }
        // after checking bit remove it
        num = num >> 1;
    }
    // if there is only 1 bit return true else false
    if (count == 1)
    {
        cout << "It is a power of two";
    }
    else
    {
        cout << "It is not a power of two";
    }
}
int main()
{
    powerOfTwo(16);
}