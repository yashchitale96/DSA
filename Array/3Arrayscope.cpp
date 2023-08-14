#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int size)
{
    arr[0] = 150;

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

int main()
{
    int arr[5] ={10, 20, 30, 40, 50};

    cout << "main function " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

    cout << "function called " <<endl;
    update(arr, 5);

    cout << "change in main function" << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}