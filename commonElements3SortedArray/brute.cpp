// we will have to handle duplicate in here
#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> a;
    vector<int> b;
    vector<int> c;
    cout << "Enter the size of a" << endl;
    int sizea;
    cin >> sizea;
    for (int i = 0; i < sizea; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    cout << "Enter the size of b" << endl;
    int sizeb;
    cin >> sizeb;

    for (int i = 0; i < sizeb; i++)
    {
        int t;
        cin >> t;
        b.push_back(t);
    }

    cout << "Enter the size of c" << endl;
    int sizec;
    cin >> sizec;

    for (int i = 0; i < sizec; i++)
    {
        int t;
        cin >> t;
        c.push_back(t);
    }

    vector<int> ans = intersection(a, b);
    vector<int> output = intersection(ans, c);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    return 0;
}