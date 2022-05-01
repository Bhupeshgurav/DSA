#include <iostream>
using namespace std;

class power
{
public:
    bool powerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        int ans = (n & (n - 1));
        if (ans == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    power ob;
    ob.powerOfTwo(8);
    return 0;
}