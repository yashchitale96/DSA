#include<bits/stdc++.h>
using namespace std;

/*
    https://leetcode.com/problems/unique-number-of-occurrences/

    TO FIND UNIQUE OCCURRENCE OF ELEMENT

    INPUT : 1 2 2 1 1 3
    OUTPUT : TRUE

    count(1) = 3
    count(2) = 2
    count(3) = 1
    Unique count of each element hence TRUE

*/
bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> ans;
    int size = arr.size();
    int i = 0;

    sort(arr.begin(),arr.end());

    while(i < size)
    {
        int count = 1;
        for(int j = i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }

            else
            {
                break;
            }
        }

        ans.push_back(count);
        i = i + count;
    }

    size = ans.size();
    sort(ans.begin(), ans.end());

    for(int i=0; i<size; i++)
    {
        if(ans[i] == ans[i+1])
        {
            return false;
        }

    }

    return true;
}

int main()
{
    vector<int> arr = {3, 1, 2, 2, 1, 3, 4};

    bool ans = uniqueOccurrences(arr);

    if(ans)
    {
        cout << "Occurrence of elements is Unique"<<endl;
    }

    else
    {
        cout << "Occurrence of elements is NOT Unique"<<endl;
    }

}
