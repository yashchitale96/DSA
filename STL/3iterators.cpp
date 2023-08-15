#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = { 10, 15, 2, 5, 7};
    
    /* REPRESENTATION OF ITERATOR*/
    vector<int>::iterator it = v.begin();
            //or//
    auto iter = v.begin();

    cout<<*iter<<endl;
    iter++; // increment the value
    cout<<*iter<<endl;
    iter--;
    cout<<*iter<<endl;

    /*LOOP IN ITERATOR */

    //1st way
    for(auto it: v)
    {
        cout<<it<<" ";
    }cout<<endl;

    //2nd way
    vector<int>::iterator ptr;
    for (ptr = v.begin(); ptr != v.end(); ptr++)
        cout << *ptr << " ";

}