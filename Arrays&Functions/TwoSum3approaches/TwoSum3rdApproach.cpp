#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
    unordered_set<int> nums;
    for (int num : array)
    {
        int potentialMatch = targetSum - num;
        if (nums.find(potentialMatch) != nums.end())
        {
            return potentialMatch > num ? vector<int>{num, potentialMatch} : vector<int>{potentialMatch, num};
        }
        else
        {
            nums.insert(num);
        }
    }
    return {};
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    vector<int> a;
    a = twoNumberSum(arr, 5);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}