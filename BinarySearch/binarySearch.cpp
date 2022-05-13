#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2; // To avoid overflow
    while (start <= end)
    {
        int middleElement = arr[mid];
        if (middleElement == target)
        {
            return mid;
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
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67, 7, 66};
    int n = 9;
    int target = 67;
    cout << binarySearch(arr, target, 9);
}