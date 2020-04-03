//It is used to insert new element at specified position.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,val,time,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in vector : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"Enter the value you want to insert : "<<endl;
    cin>>val;
    cout<<"Enter the number of times value you want to insert : "<<endl;
    cin>>time;
    v.insert(v.begin()+1,time,val);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

