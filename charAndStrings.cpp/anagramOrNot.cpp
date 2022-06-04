#include <bits/stdc++.h>
using namespace std;

// bool anagram(string str1,string str2)
// {

//     sort(str1+str1+n);
//     sort(str2+str1+n);
//     for(int i=0;j=0;i<n;j<n1;i++;j++)
//     {
//         if(str1[i] == str2[j])
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

// }

char flip(char expected)
{
    if (expected == '0')
    {
        return '1';
    }
    else
    {
        return '0';
    }
}

int anagram2(string str1, char expected)
{
    int bitFlip = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != expected)
        {
            bitFlip += 1;
        }
        expected = flip(expected);
    }
    return bitFlip;
}

int main()
{
    string str1 = "0010";

    int ans0 = anagram2(str1, '0');
    int ans1 = anagram2(str1, '1');
    int ans = min(ans0, ans1);
    cout << "Answer is:" << ans << endl;
    return 0;
}

/*
Dry run

0010
case 1
when 0 is passed to compare as
we need 0101
therefore it will go inside and then
check if 0==0 true change expected
0==1 false bitFlip = 1 change expected
1== 0 false bitFlip = 2 change expected
0 == 1 false bitFlip = 3 change expected

case 2
when 1 is passed to compare as
we need 1010
therefore it will go insidea and then
check if 0==1 false bitFlip = 1 change expected
0 == 0 true change expected
1 == 1 true change expected
0 == 0 true change expected

min(case1,case2)



*/
