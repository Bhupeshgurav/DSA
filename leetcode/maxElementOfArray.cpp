#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << maxArray(arr, 5);
}