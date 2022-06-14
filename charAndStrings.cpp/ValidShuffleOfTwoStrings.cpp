#include <iostream>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    string res;
    cin >> res;
    int l1 = s1.length();
    int l2 = s2.length();
    int lr = res.length();
    if ((l1 + l2) != lr)
        cout << "No";
    else
    {
        int f = 0;
        int i = 0, j = 0, k = 0;
        while (k < lr)
        {
            // checking the first element first
            if (i < l1 and s1[i] == res[k])
                i++;
            else if (j < l2 and s2[j] == res[k])
                j++;
            else
            {
                f = 1;
                break;
            }
            k++;
        }
        if (i < l1 or j < l2)
            cout << "no";
        else
            cout << "yes";
    }
}

int main()
{
    solve();
}