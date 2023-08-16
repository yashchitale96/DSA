#include<bits/stdc++.h>
using namespace std;

void reverse(char ch[], int size)
{
    int s = 0;
    int e = size-1;

    while(s < e)
    {
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
   
}

int main()
{
    char ch[10];
    cout << "Enter the name: ";
    cin >> ch;

    cout << "Before reverse: " << ch << endl;

    reverse(ch,4);

    cout << "After the reverse: " << ch << endl;
}
