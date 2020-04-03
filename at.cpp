//It gives a reference to an element.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<"\nElement at position 3: "<<endl;
    cout<<v.at(2);
}
