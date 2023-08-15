#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* REPRESENTATION OF VECTOR */

    vector<int> v1; // empty vector
    vector<int> v2 = {1,2,3};  // vector with values
    vector<int> v3(10); // vector with size 10
    vector<string> v4(5,"Yash");  // vector takes value Yash as 5 times
    vector<char> v5 = {'a'};
    vector<bool> v6 = {"True"};
    vector<string> v7 = {"Yash"};

    /* IMPORATANT FUNCTION */

    vector<int> a;

    a.push_back(5);  // add the element in the end
    a.push_back(10); // add the element after 5
    
    a.pop_back();    // remove the element 10 (because it comes last)

    a.clear();  // it removes the all the element

    cout<< a.size() <<endl;  // prints the size of vector


    /* LOOPS USE FOR THE VECTORS */

    vector<int> p ={10,15,17,20};

    //1st ways(without index)
    for(auto &it : p)
    {
        cout<< it << " ";
    }cout<<endl;


    //2nd ways(with index)
    for(int i=0; i<p.size(); i++)
    {
        cout<< p[i] << " ";
    }cout<<endl;


    //3rd way(using the begin and end function)
    for(auto it=p.begin(); it!= p.end(); it++)
    {
        cout<< *it <<" ";
    }cout<<endl;

    
    /* SORT IN VECTOR */
    vector<int> q={10,5,4,7,45,6};

    sort(q.begin(),q.end());

    for(auto &it : q)
    {
        cout<< it <<" ";
    }cout<<endl;
    

    
    
    
}
