#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string a, string b)
{
    map<char, int> m;
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        m[ch]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];
        m[ch]--;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (m[i] != 0)
            return false;
    }
}

int main()
{
    string a = "test";
    string b = "ttew";
    if (areAnagram(a, b))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";
    return 0;
}