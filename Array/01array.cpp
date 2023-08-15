#include<bits/stdc++.h>
using namespace std;

void printArray(int a[], int size)
{
    cout << "Print array using function " << endl; 
    for(int i=0 ; i<size ; i++)
    {
        cout << a[i] << " ";
    }cout << endl;
}

int main()
{

    /* PRINTING SAME VALUE IN ALL INDEXES */
    
    int arr[10];
    fill_n(arr, 10, 5);
    cout << "Printing same value in all indexes " << endl;
    for(int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;


    /*ARRAY WITH FUNCTION*/

    int a[3] = {10,20,30};
    printArray(a , 3);


    /* SIZE OF ARRAY */
    
    int arry[10];
    int size = sizeof(arry) / sizeof(int);
    cout <<"Size of array is: " << size << endl;


    /* DIFFERENT DATATYPES OF ARRAY */

    char ch[2] = {'a', 'b'};

    string c[2] = {"yash", "chitale"};

    float f[2] = {1.2, 3.4};

    double d[2] = {1.222, 3.4567};

    bool b[2] = {1, 0};

    cout << "printing array with different datatypes" << endl;
    for(int i=0; i<2; i++)
    {
        cout << b[i] << " ";
        
    }cout << endl;

}
