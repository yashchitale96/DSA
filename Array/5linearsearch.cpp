#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int arr[5] ={10, -1, 2, 85};

    cout << "Enter the key: ";
    int key;
    cin >> key;

    bool found = search(arr, 5, key);

    if(found)
    {
        cout << "key is present" << endl;
    }

    else
    {
        cout << "key is not present" << endl;
    }

     
}