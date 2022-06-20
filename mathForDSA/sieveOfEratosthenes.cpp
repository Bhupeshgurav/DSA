#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // sieveOfEratosthenes

    int n;
    cin >> n;

    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << "-> " << isPrime[i] << endl;
    }

    // i=2 will go till 30, 4,6,8,10,12,14
    // i=3 -> 6,9,12,15,18,21,24,27,30
    // i=5 -> 10,15,20,25,30
    // i=7 -> 14,21,28
    // i=11 -> 22
    // i= 13 -> 26
    // i=17 -> 34 which is out of bound

    return 0;
}