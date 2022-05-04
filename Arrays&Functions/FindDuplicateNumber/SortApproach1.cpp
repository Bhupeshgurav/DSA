// Time: O(nlogn) for sorting then a linear scan takes place which takes O(n) time
// O(nlogn) + O(n) = O(nlogn)
// Space: O(logn) or O(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            return arr[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3, 4, 5, 6};
    cout << findDuplicate(nums);
}