#include <bits/stdc++.h>
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

void Union2(int arr1[], int arr2[], int m, int n)
{
    set<int> hs;
    for (int i = 0; i < m; i++)
    {
        hs.insert(arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        hs.insert(arr2[i]);
    }
    for (auto it = hs.begin(); it != hs.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;

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

vector<int> intersection1(int arr1[], int arr2[], int m, int n)
{
    vector<int> res;
    set<int> s1(arr1, arr1 + m);
    set<int> s2(arr2, arr2 + n);
    for (int x : s2)
    {
        if (s1.count(x))
            res.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cout << res[i] << endl;
    }
}

void Intersection3(int arr1[], int arr2[], int m, int n)
{
    set<int> hs;
    for (int i = 0; i < m; i++)
    {
        hs.insert(arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (hs.find(arr2[i]) != hs.end())
            cout << arr2[i] << " ";
    }
}
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    vector<int> arr3;
    cout << "Union method 1" << endl;
    Union(arr1, arr2, 5, 4);
    cout << endl;
    cout << "Union method 2" << endl;
    Union2(arr1, arr2, 5, 4);
    cout << endl;
    cout << "Intersection method 1" << endl;
    intersection(arr1, arr2, 5, 4);
    cout << endl;
    cout << "Intersection method 2" << endl;
    Intersection3(arr1, arr2, 5, 4);

    return 0;
}