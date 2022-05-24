#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int n = 5;
    vector<int> prefixSum(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        prefixSum[i] = sum;
    }
    unordered_map<int, bool> mp;
    for (int i = 0; i < n; i++)
    {
        if (prefixSum[i] == 0)
        {
            cout << "The zero case\n";
            cout << "The sum of subarray is zero" << endl;
        }
        else if (mp[prefixSum[i]] == true)
        {
            cout << "Same case \n";
            cout << "The sum of subarray is zero" << endl;
        }
        else
        {
            mp[prefixSum[i]] = true;
        }
    }
}
