#include <iostream>
using namespace std;

bool checkAnagram(string a, string b)
{
    int freq[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        int index = ch - 'a';
        freq[index]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];
        int index = ch - 'a';
        freq[index]--;
    }
    bool flag = true;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
}

int main()
{
    string a = "test";
    string b = "ttew";
    if (checkAnagram(a, b))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";
    return 0;
}