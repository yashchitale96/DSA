#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++) 
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++) 
        {
            if (element + arr[j] == s) 
            {
                ans.push_back({element, arr[j]});
            }
        }
    }
    
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<vector<int>> ans = pairSum(arr, 5);

    for (const vector<int> &pair : ans)
    {
        cout << pair[0] << " " << pair[1] << endl;
    }

}