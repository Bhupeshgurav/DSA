#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < 6; i += 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}

/*

void swapAlternate(int arr[], int n)
{
    int i=0
    while(i+1<n){

            swap(arr[i], arr[i + 1]);
        i+=2
    }

}
*/

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 9};
    swapAlternate(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
}