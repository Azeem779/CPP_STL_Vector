//This function is used to access a specified element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int pos,i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in vector : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"Enter the position you want to access : "<<endl;
    cin>>pos;
    v.operator[](pos-1);
    cout<<v[pos-1]<<" ";
}



