#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
    sort(array.begin(), array.end());
    int left = 0;
    int right = array.size() - 1;

    while (left < right)
    {
        int currentSum = array[left] + array[right];
        if (currentSum == targetSum)
        {
            return {array[left], array[right]};
        }
        else if (currentSum < targetSum)
        {
            left++;
        }
        else if (currentSum > targetSum)
        {
            right--;
        }
    }
    return {};
}
int main()
{
    vector<int> arr{2, 1, 3, 4};

    vector<int> a;
    int target = 4;
    a = twoNumberSum(arr, target);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}