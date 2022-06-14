#include <bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    for (int i = 0; i <= m - n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (s2[i + j] != s1[j])
                break;
        }
        if (j == n)
            return i;
    }
    return -1;
}

int main()
{
    string s1 = "bhupesh";
    string s2 = "bhupeshGurav";
    int res = isSubstring(s1, s2);
    if (res == -1)
    {
        cout << "Not present";
    }
    else
    {
        cout << "Present at index" << res;
    }
}