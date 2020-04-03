//This function is used to exchange the elements specified in two vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1,v2;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter element in first vector : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        v1.push_back(input);
    }
    cout<<"\nElement in vector first : "<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nEnter element in second vector : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        v2.push_back(input);
    }
    cout<<"\nElement in vector second : "<<endl;
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<"\n";
    v1.swap(v2);
    cout<<"\nAfter swapping element in vector first : "<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nAfter swapping element in vector second : "<<endl;
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
}
