/*
*****
****
***
**
*
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col <= row - 1; col++)
        {
            cout << " ";
        }
        for (int col = n - row + 1; col > 0; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}