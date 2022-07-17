#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}

int main()
{
    int n;
    cin >> n;
    cout << "Factorial of n is " << factorial(n) << endl;
}