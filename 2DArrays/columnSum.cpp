#include <iostream>
using namespace std;

void colSum(int arr[4][2], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;

        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void rowSum(int arr[4][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[4][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << "The matrix is as follows:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Column wise sum is as follows:" << endl;
    colSum(arr, 4, 2);
    cout << endl;
    cout << "The row sum is as follows: " << endl;
    rowSum(arr, 4, 2);
}