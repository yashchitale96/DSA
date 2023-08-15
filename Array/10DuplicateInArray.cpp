#include<bits/stdc++.h>
using namespace std;

/*
    https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

    TO FIND DUPLICATE IN ARRAY

    INPUT : 4 2 1 3 1
    OUTPUT : 1
    
    count(1) = 2
    count(2) = 1
    count(3) = 1
    count(4) = 1
    here if count of element is 2 then print the answer
*/
int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    for(int i=0; i<arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for(int i=0; i<arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 1};

    int ans = findDuplicate(arr);

    cout << "Duplicate element is: " << ans ;
}