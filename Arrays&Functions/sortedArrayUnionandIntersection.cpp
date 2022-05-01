#include <iostream>
using namespace std;

void Union(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else
        {
            cout << arr2[j++] << " "; // print anyone of the array and increment both the counters.
            i++;
        }
    }
    // Print remaining elements of the larger array
    while (i < m)
        cout << arr1[i++] << " "; // this is same as arr1[i] i++
    while (j < n)
        cout << arr2[j++] << " ";
}

void intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    cout << endl
         << "Intersection of the elements is as follows:";
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    Union(arr1, arr2, 5, 4);
    intersection(arr1, arr2, 5, 4);
    return 0;
}