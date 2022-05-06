// Brute force
// Keep i nad then check on the right side of i
// if target - i exist on the right half or not
// TC O(n2)
// SC O(1)
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res.emplace_back(i);
                res.emplace_back(j);
                break;
            }
        }
        if (res.size() == 2)
            break;
    }
    return res;
}

int main()
{
    vector<int> arr{3, 2, 4, 6};
    int target = 6;
    vector<int> a;
    a = twoSum(arr, target);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}