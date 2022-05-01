

bool palindrome(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[30] = {1, 2, 3, 2, 1};
    int n = 5;
    int a = palindrome(arr, n);
    cout << a;
}
