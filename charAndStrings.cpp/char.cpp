#include <bits/stdc++.h>
using namespace std;

void reverse(char arr[])
{
    int s = 0;
    int n = strlen(arr);
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    // creation
    char name[2];

    // input
    cin >> name;
    reverse(name);
    cout << "Reversed name is:" << name;

    cout << "String starts from here " << endl;
    // creation
    string str;
    // input
    cin >> str;
    // print
    cout << "str is" << str << endl;

    return 0;
}