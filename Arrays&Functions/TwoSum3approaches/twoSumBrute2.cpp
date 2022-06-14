// time:O(nlogn), space: O(1)
#include <bits/stdc++.h>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum, int n)
{
    for (int i = 0; i < n; i++)
    {
        int firstNum = array[i];
        for (int j = i + 1; j < n; j++)
        {
            int secondNum = array[j];
            if (firstNum + secondNum == targetSum)
            {
                return firstNum > secondNum ? vector<int>{secondNum, firstNum} : vector<int>{firstNum, secondNum};
            }
        }
    }
    return {};
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    vector<int> a;
    int n = 6;
    a = twoNumberSum(arr, 5, n);

    for (int i = 0; i < 2; i++)
    {
        cout << a[i] << endl;
    }
}