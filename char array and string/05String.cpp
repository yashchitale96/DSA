#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;

    cout<<"Enter your name: ";

    cin>>name;

    cout<<"Name of String is: "<<name<<endl;

    cout << "First character: " << name.front() << " Last character: " << name.back() << endl;

    cout << "Size of string is: "<<name.size()<<endl;
    cout << "Length of string is: "<<name.length()<<endl;
    cout << "Max Size of string is: "<<name.max_size()<<endl;
    cout << "Capacity of string is: "<<name.capacity()<<endl;  // calculate byte size
   
    // Empty string

    cout<<"Is string is empty? "<<name.empty()<<endl;
    
    // Clear String
    name.clear();

    cout<<"Is string is empty? "<<name.empty()<<endl;

    name.push_back('c');

    cout<<"After Adding character "<<name<<endl;


    

  return 0;
}
