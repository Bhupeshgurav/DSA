#include <iostream>
using namespace std;
// In 2d array you have to mention atleast column value in the arguments that you give in the function paranthesis.

bool search(int arr[3][3], int target, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << search(arr, 14, 4, 2) << endl;
}