#include <iostream>
using namespace std;
int main()
{
    // all elements will be set to 0
    int arr1[3][3] = {0};
    // Initializing first element with 1 and rest with 0
    int arr2[3][3] = {1};
    // Initializing 2D array like 1D array
    int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[4][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    int arr4[4][2] = {{1}, {2, 3}, {3, 4}, {4, 5}};
    int n = 3;

    // Print entire 2D matrix
    for (int i = 0; i < 4; i++)
    {
        // Print entire row
        for (int j = 0; j < 2; j++)
        {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
}