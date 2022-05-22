// TC:O(log(n))
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0]) // on the above line
        {
            s = mid + 1; // we have to go to the below line therefore this condition
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(vector<int> &arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int rotatedTarget(vector<int> &arr, int n, int target)
{
    int pivot = getPivot(arr, n);
    if (target >= arr[pivot] && target <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, target);
    }
    else
    {
        return binarySearch(arr, 0, pivot, target);
    }
}
int main()
{
    vector<int> arr{7, 9, 1, 2, 3};
    cout << rotatedTarget(arr, 5, 3);
}