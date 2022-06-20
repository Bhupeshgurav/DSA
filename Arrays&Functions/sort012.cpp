#include <iostream>
using namespace std;

void sortZeroOneTwo(int arr[], int n)
{
    int one = 0, zero = 0, two = 0;
    // count all the numbers
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else
            two++;
    }

    int i = 0;
    while (zero--)
    {
        arr[i] = 0;
        i++;
    }

    while (one--)
    {
        arr[i] = 1;
        i++;
    }

    while (two--)
    {
        arr[i] = 2;
        i++;
    }
}

int main()
{
    int arr[40] = {1, 1, 1, 1, 0, 0, 0, 2, 2, 2, 2, 0, 1, 0, 1};
    int n = 15;
    sortZeroOneTwo(arr, 15);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}