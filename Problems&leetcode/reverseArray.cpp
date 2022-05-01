#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[40] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    // output
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}