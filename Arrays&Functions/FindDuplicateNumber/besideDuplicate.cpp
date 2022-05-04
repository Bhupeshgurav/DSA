#include <iostream>
using namespace std;

int besideDuplicate(int arr[], int n)
{
    int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }
    int sum2 = (n * (n + 1)) / 2;
    int ans = sum1 - sum2;

    return ans;
}
int main()
{
    int arr[8] = {1, 2, 2, 3, 56, 7, 34, 23};
    int n = 8;
    int a = besideDuplicate(arr, n);
    cout << a;
}