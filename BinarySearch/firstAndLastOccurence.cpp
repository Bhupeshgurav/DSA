#include <iostream>
using namespace std;

int firstOccurence(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2; // To avoid overflow
    int ans = -1;
    while (start <= end)
    {
        int middleElement = arr[mid];
        if (middleElement == target)
        {
            ans = mid;
            end = mid - 1;
        }
        if (target < middleElement)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - 1) / 2; // To avoid overflow
    int ans = -1;

    while (start <= end)
    {
        int middleElement = arr[mid];
        if (middleElement == target)
        {
            ans = mid;
            start = mid + 1;
        }
        if (target < middleElement)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 7, 7};
    int n = 8;
    int target = 4;
    cout << firstOccurence(arr, target, 8);
    cout << lastOccurence(arr, target, 8);
}