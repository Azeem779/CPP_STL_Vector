//It deletes the last element and reduces the size of the vector by one
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
    v.pop_back();
    cout<<"After popping element."<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
