#include <vector>
// Brute O(n2) approach
#include <iostream>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    for (int i = 0; i < 26; i++)
    {
        char ans = 'a' + i;
        if (ans > target)
        {
            for (int i = 0; i < letters.size(); i++)
            {
                if (letters[i] == ans)
                {
                    cout << ans;
                    break;
                }
                break;
            }
        }
    }
}

int main()
{
    vector<char> letters{'c', 'f', 'j'};
    char target = 'a';
    cout << nextGreatestLetter(letters, target);
}