// Time: O(n)
// Space: O(1)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMaxSubArray(int arr[], int n)
{
    int ans = INT_MIN;
    int max_so_far = 0;

    for (int i = 0; i < n; i++)
    {
        max_so_far = max_so_far + arr[i];
        ans = max(ans, max_so_far);

        if (max_so_far < 0)
            max_so_far = 0;
    }
    return ans;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "Max Subarray Sum is:" << getMaxSubArray(arr, 8);
}

// 4, -1, -2, 1, 5 = 7 max subarray