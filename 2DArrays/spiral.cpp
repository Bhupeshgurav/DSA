#include <algorithm>
#include <iostream>
using namespace std;

void spiral(int arr[3][6], int row, int col)
{
    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;
    int total = 18;
    int count = 0;

    while (count < total)
    {
        for (int i = startCol; i <= endCol; i++)
        {
            cout << arr[startRow][i] << " ";
            count++;
        }
        startRow++;
        for (int i = startRow; i <= endRow; i++)
        {
            cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;
        if (startRow <= endRow)
        {
            for (int i = endCol; i >= startCol; i--)
            {
                cout << arr[endRow][i] << " ";
                count++;
            }
            endRow--;
        }

        if (startCol <= endCol)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << arr[i][startCol] << " ";
                count++;
            }
            startCol++;
        }
    }
}

int main()
{
    int arr[3][6] = {{1, 2, 3, 4, 5, 6},
                     {7, 8, 9, 10, 11, 12},
                     {13, 14, 15, 16, 17, 18}};

    spiral(arr, 3, 6);
}