// using set to store only unique values of both the arrays in one set and it sorts the unsorted array
// Time complexity: o(m*log(m)+n*log(n))
// One problem in the intersection that it gives duplicate values.
// We can also do it by using map key value pairs.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Union(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    cout << s.size() << endl;
    cout << "Union set is as follows:";
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << ',';
}

void Intersection(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    cout << endl
         << "Intersection is as follows:";
    for (int i = 0; i < m; i++)
        // if the element is present in the set push it to the array b
        if (s.find(b[i]) != s.end())
            cout << b[i] << ',';
}
int main()
{
    int a[8] = {1, 2, 4, 2, 2, 5, 6, 6};
    int b[5] = {9, 10, 2, 2, 5};
    Union(a, 8, b, 5);
    Intersection(a, 8, b, 5);
}