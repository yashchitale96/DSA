#include<bits/stdc++.h>
using namespace std;

void reverseWord(string s)
{
    int st = 0;
   for(int i=0; i<=s.size(); i++)
   {
        if(s[i] == ' ' || s[i] == '\0')
        {
            int index = i;
            int e = index-1;

            while(st <= e)
            {
                swap(s[st], s[e]);
                st++;
                e--;
            }
            st = index+1;
        }
   }
   cout<<s<<endl;
}
int main()
{
    string s;
    getline(cin, s);


    reverseWord(s);


}
