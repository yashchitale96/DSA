#include<bits/stdc++.h>
using namespace std;

/*

    https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1
    
    TO FIND UNIQUE ELEMENT IN ARRAY

    INPUT : 2 4 7 2 7
    OUTPUT : 4

    INPUT : 1 3 1 3 6 6 7 10 7
    OUTPUT : 10
*/

int findUnique(int *arr, int size)
{
    int ans = 0;

    for(int i=0; i<size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[5] = {2, 4, 7, 2, 7};

    int ans = findUnique(arr, 5);

    cout << "Unique element is: " << ans ;
}