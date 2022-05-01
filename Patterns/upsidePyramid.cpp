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
    int counter = n;
    // for (int row = 0; row <= n; row++)
    // {
    //     for (int col = n - row + 1; col > 0; col--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // or
    // for (int row = 0; row <= n; row++)
    // {
    //     for (int col =1 col <n-row+1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // or

    for (int row = 0; row <= n; row++)
    {
        for (int col = counter; col > 0; col--)
        {
            cout << "*";
        }
        cout << endl;
        counter--;
    }
}