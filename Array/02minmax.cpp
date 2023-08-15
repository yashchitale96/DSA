#include<bits/stdc++.h>
using namespace std;

int maxarr(int arr[], int size)
{
    int maxi = INT_MIN;

    for(int i=0; i<size; i++)
    {
        // 1st way
        /*
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
        */

       //2nd way
       maxi = max(maxi,arr[i]);
    }

    return maxi;
}

int minarr(int arr[], int size)
{
    int mini = INT_MAX;

    
    for(int i=0; i<size; i++)
    {
        //1st way
        /*
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
        */
       
        //2nd way
        mini = min(mini, arr[i]);
    }
    

   

    return mini;
}

int main()
{
    int arr[10];

    cout << "Enter the value " << endl;
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
    }

    int maximum = maxarr(arr, 10);
    int minimum = minarr(arr, 10);

    cout << "The max element is: " << maximum << endl;
    cout << "The min element is: " << minimum << endl;
}
