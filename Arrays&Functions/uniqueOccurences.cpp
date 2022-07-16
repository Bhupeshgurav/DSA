#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> mp;
    set<int> st;
    for (int num : arr)
    {
        mp[num]++;
    }
    for (auto &x : mp)
    {
        if (st.count(x.second) > 0)
            return false;
        else
            st.insert(x.second);
    }
    return true;
}

int main()
{
    vector<int> arr{1, 1, 2};
    int a;
    a = uniqueOccurrences(arr);
    cout << a;
}