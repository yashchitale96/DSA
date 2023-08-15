#include<bits/stdc++.h>
using namespace std;

/*
    TO FIND INTERSECTION OF TWO SORTED ARRAY

    INPUT : 1 2 2 2 3 4
            2 2 3 3
    
    OUTPUT: 2 2 3
    print common occuring element in both array

*/
vector<int> findArrayIntersection(vector<int>&arr1, int n, vector<int>&arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;

    while(i< n && j<m)
    {
        if(arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j])
        {
            i++;
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
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> ans = findArrayIntersection(arr1, 6, arr2, 4);

    for(auto &it : ans)
    {
        cout << it << " ";
    }
}