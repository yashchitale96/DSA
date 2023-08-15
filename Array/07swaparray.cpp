#include<bits/stdc++.h>
using namespace std;

/*
    SWAP ALTERANATE ARRAY
    
    input: 10 20 30 40 50
    output: 20 10 40 30 50
*/

void swapArray(int arr[], int size)
{
    for(int i=0; i<size; i+=2)
    {
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
int main()
{
    int arr[5] ={10,20,30,40,50};

    cout << "Before swap operation: "<< endl;
    printArray(arr, 5);

    cout << "After swap operation: " << endl;
    swapArray(arr, 5);
    printArray(arr, 5);
}
