// TC: O(N*log(N)) where N = length of the string passed and it generally takes O(log(n)) for an element insertion in a map
// SC: O(K) where k is sizeof map
#include <bits/stdc++.h>
using namespace std;

void duplicateAndItsCount(string str)
{
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cout << it.first << ", count is:" << it.second << endl;
        }
    }
}

int main()
{
    string str = "test string";
    duplicateAndItsCount(str);
}
