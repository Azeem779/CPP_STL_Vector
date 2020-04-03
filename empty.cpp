//This function determines whether the vector is empty or not
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
    if(v.empty())
    {
        cout<<"\nVector is empty.\n";
    }
    else
    {
        cout<<"\nVector is not empty.";
    }
}

