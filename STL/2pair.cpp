#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* REPRESENTATION OF SETS */
    pair<int,int> p;  // empty pair of integers
    pair<int,string> q = {10,"yash"};  // pair of intger and string
    pair<vector<int>, int> r;  // pair of vector and intger
    cout<<q.first<<" "<<q.second<<endl;  // Access using first and second

    /* LOOPS IN PAIR */

    vector<pair<int, int>> pairVec;  // create a vector of pairs
    pairVec.emplace_back(1, 5); // adding pairs to the vector
    pairVec.emplace_back(2, 4);
    pairVec.emplace_back(3, 7);

    for (auto &iter : pairVec) {
        cout << "First: " << iter.first << ", Second: "
        << iter.second <<endl;
    }

    /* SORT IN PAIR*/
    pair<int,int> a[5]; // an array of 5 pair

    a[0]={1,2};a[1]={2,1};a[3]={7,5};a[4]={5,7};

    sort(a, a+5);

    for(int i=0; i<5; i++)
    {
        cout<<"{"<<a[i].first<<","<<a[i].second<<"}"<<" ";
    }cout<<endl;
    
}