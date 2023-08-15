#include<bits/stdc++.h>
using namespace std;

/*
    https://leetcode.com/problems/find-all-duplicates-in-an-array/

    FOR REFERENCE: https://youtu.be/ACYunkWQnSI

    TO FIND ALL DUPLICATE ELEMENT IN ARRAY

    INPUT : 4 3 2 7 8 2 3 1
    OUTPUT : 2 3
    count(1) = 1
    count(2) = 2
    count(3) = 2
    count(4) = 1
    count(7) = 1
    count(8) = 1
    here count of element is true then return the element
*/


/*                  APPROACH NO 1
vector<int>findDuplicate(vector<int> &nums)
{
    vector<int> ans;
    int i=0;
    int size = nums.size();

    sort(nums.begin(), nums.end());

    while(i < size)
    {
        int count = 1;
        for(int j = i+1; j<size; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }

            else
            {
                break;
            }
        }
        
        if(count == 2)
        {
            ans.push_back(nums[i]);
        }

        i = i + count;
    }

    return ans;
}
*/

/*                  APPROACH NO 2                                     */
vector<int> findDuplicate(vector<int> &nums)
{
    vector<int> ans;

    for(int i=0; i<nums.size(); i++)
    {
        int a = abs(nums[i]) - 1;

        nums[a] = (-1 * nums[a]);

        if(nums[a] > 0)
        {
            ans.push_back(a+1);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> v = findDuplicate(nums);

    for(auto &it : v)
    {
        cout << "Duplicate element is: " << it << endl;
    }
}
