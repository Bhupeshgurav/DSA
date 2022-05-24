#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {2, 1, 3, 2, 4, 3};
    // step1
    unordered_map<int, int> freq;
    for (int i = 0; i < 6; i++)
    {
        freq[arr[i]]++;
    }

    // Step2
    for (int i = 0; i < 6; i++)
    {
        if (freq[arr[i]] > 1)
        {
            cout << arr[i] << " is the answer" << endl;
            break; // this is why we get 1st repeating coz it breaks out of the loop
        }
    }

    return 0;
}