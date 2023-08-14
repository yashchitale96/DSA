#include<bits/stdc++.h>
using namespace std;

int sumofarray(int arr[], int size)
{
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin>>size;
    cout << endl;

    int arr[size];

    cout << "Enter the element: ";
    cout<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int sum = sumofarray(arr, size);

    cout << "Sum of array is: " << sum << endl;
}