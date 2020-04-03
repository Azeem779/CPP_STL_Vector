//It modifies the size of the vector to the specified value
//It deletes the specified element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,val,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in vector : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"Enter the value you want as size : "<<endl;
    cin>>val;
    v.resize(val);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

