#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* REPRESENTATION OF MAPS */
    map<string,int> m;
    map<int,int> p;

    /* INSERT ELEMENTS IN MAP */
    m["YASH"] = 50;
    p[-101] = 100;
    cout<<m["YASH"]<<" "<<p[-101]<<endl;


    /* FUNCTIONS USED IN MAPS*/
    map<string,int> r;
    r["ram"] = 45;
    r["sham"] = 99;

    cout<<r.size()<<endl;

   map<string, int>::iterator it = r.begin();
 
  while (it != r.end())
  {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    ++it;
  }
}
