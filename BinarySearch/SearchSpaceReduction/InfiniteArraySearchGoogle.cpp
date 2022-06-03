#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return true;
        }
        else if (target < arr[mid])
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

int search(int arr[], int target)
{
    int s = 0;
    int e = 1;
    int val = arr[s];
    while (val < target)
    {
        s = e;
        e = e * 2;
        val = arr[e];
    }
    return binarySearch(arr, s, e, target);
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 9, 23, 33, 35};
    int target = 10;
    cout << search(arr, target);
}

// Algorithm

/*

s = 0;
e = 1;
mid = 0
// Finding the range
while(val<target){
    s = e;
    e = e*2;
    val = arr[e];
}
return binarySearch()
// Binary Search



*/