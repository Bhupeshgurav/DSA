#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return true;
    }
    return false;
}
int main()
{

    int arr[50] = {1, 2, 3, 4, 7};

    if (search(arr, 5, 7))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}