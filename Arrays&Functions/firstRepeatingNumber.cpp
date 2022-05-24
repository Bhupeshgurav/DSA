#include <bits/stdc++.h>
using namespace std;

int firstRepeating(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int currentElement = arr[i];
        mp[currentElement]++;
    }
    for (int i = 0; i < n; i++)
    {
        int currentElement = arr[i];
        if (mp[currentElement] > 1)
        {
            return currentElement;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 5, 6};
    cout << firstRepeating(arr, 7);
}