#include<bits/stdc++.h>
using namespace std;

void length(string ch)
{
    int count = 0;
    for(int i=0; ch[i] !='\0'; i++)
    {
        count++;
    }

    cout << "Length of string is: " << count << endl;
}
int main()
{
    string ch;
    cout<<"Enter the name: ";
    cin>>ch;

    length(ch);
}
