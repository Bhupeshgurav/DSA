#include <iostream>
using namespace std;

int minSwap(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            count++;
    }
    // Finding elements which are greater than k in the current window of size count
    int bad = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
            bad++;
    }
    // Initialize answer with 'bad' value of current window
    int ans = bad;
    for (int i = 0, j = count; j < n; i++, j++)
    {
        if (arr[i] > k)
            bad--;
        if (arr[j] > k)
            bad++;
        ans = min(ans, bad);
    }
    return ans;
}

int main()
{
    int arr[7] = {2, 7, 9, 5, 8, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    cout << minSwap(arr, n, k) << "\n";
}