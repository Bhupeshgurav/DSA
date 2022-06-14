#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int l, r = 0;
    while (l < s.size())
    {
        while (r < s.size() && r != ',')
            r++;
        reverse(s.begin() + l, s.begin() + r);
        l = r + 1;
        r = l;
    }
    return s;
}
int main()
{
    string s = {["t", "h", "e", " ", "s", "k", "y", " ", "i", "s", " ", "b", "l", "u", "e"]};
    reverseWords(s);
}

/*
Approach
input My name is bhupesh
output


*/