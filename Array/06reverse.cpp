#include<bits/stdc++.h>
using namespace std;

void reverseeven(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseodd(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    } 
}

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

int main()
{
    /* EVEN ARRAY REVERSE */
    int even[4] = {10,20,30,40};

    cout << "Even array" << endl;

    for(int i=0; i<4; i++)
    {
        cout<<even[i]<<" ";
    }cout << endl;

    cout << "Reverse of even array" << endl;

    reverseeven(even, 4);

    print(even, 4);


    cout << endl;


    /* ODD ARRAY REVERSE */
    int odd[5] = {15,75,45,88,2};

    cout << "Odd array" << endl;

    for(int i=0; i<5; i++)
    {
        cout<<odd[i]<<" ";
    }cout << endl;

    cout << "Reverse of odd array" << endl;

    reverseodd(odd, 5);

    print(odd, 5);
}
