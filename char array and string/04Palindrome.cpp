#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.size() - 1;
    int count = 0;
    while(st <= e)
    {
        if(s[st] != s[e])
        {
            return false;
        }
        st++;
        e--;
    }

    return true;
}
int main()
{
    
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    bool found = checkPalindrome(s);

    if(found)
    {
        cout<<"String is Palindrome"<<endl;
    }

    else
    {
        cout<<"String is not Palindrome"<<endl;
    }
}
