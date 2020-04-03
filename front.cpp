//It gives a reference to the first element of vector.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter element in vector : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"Element in vector are :";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n\nFirst element in the vector is : ";
    cout<<v.front();
}


