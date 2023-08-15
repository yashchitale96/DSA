#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* REPRESENTATION OF SET */

    set<int> s; // empty set of integers
    set<int> a = {10,10,15,15,20,25};  //print => 10 15 20 25
    set<char> b = {'a','b','a'}; //print => a b
    set<string>c = {"Yash", "chitale" ,"chitale"}; //print => Yash chitale

    /* FUNCTIONS OF SETS */

    set<int> p;
    p.insert(10);
    p.insert(5);
    p.insert(10);  // set does not print duplicate value

    p.erase(5); // it removes the value

    cout<< p.count(5) <<endl;  // returns 1 if value is present else returns false

    p.clear();  // remove the all the value

    p.size();  // tells the size of set


    /* LOOPS USE FOR THE VECTORS */

    set<int> x ={10,15,17,20};

    //1st ways(without index)
    for(auto &it : x)
    {
        cout<< it << " ";
    }cout<<endl;


    //2nd way(using the begin and end function)
    for(auto it=x.begin(); it!= x.end(); it++)
    {
        cout<< *it <<" ";
    }cout<<endl;

   
}
