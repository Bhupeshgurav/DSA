#include <iostream>
using namespace std;

// TC: O(n)
// SC: O(1)

// Without preserving the order
void negativeOnOneSide(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[30] = {2, -1, 23, 4, 56, -44, 3, -1, 4};
    int n = 9;
    negativeOnOneSide(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}