// TC:O(N) for length of the string
// SC:O(k) for map
#include <bits/stdc++.h>
using namespace std;

void duplicateAndCount(string str)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cout << it.first << ", count is" << it.second << endl;
        }
    }
}
int main()
{
    string str = "time left";
    duplicateAndCount(str);
}