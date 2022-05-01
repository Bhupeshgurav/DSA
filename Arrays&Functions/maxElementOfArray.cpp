#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}

/*
To return both maximum and minimum in same function we will use pairs

pair<int, int> getMaxMinFromArray(int arr[], int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    pair<int,int> p = make_pair(maxi,mini)
    return p;
}






*/

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << maxArray(arr, 5);
}