#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    int k = (m+n) - 1;

    while(i>=0 && j>=0)
    {
        if(nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }

        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }

    while(j>=0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    
}

int main()
{
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
   
    merge(arr1, 6, arr2, 4);

}