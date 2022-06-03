#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int> arr, int s, int e, int target)
{

    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int multiplyBy2(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= 0 && binarySearch(arr, i + 1, arr.size() - 1, 2 * arr[i]))
        {
            return true;
        }
        else if (arr[i] < 0 && arr[i] % 2 == 0 && binarySearch(arr, i + 1, arr.size() - 1, arr[i] / 2))
        {
            return true;
        }
    }
}

int main()
{
    vector<int> arr{2, 3, 24, 5, 7, 11};

    cout << multiplyBy2(arr);
    // 1
}