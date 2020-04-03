//It deletes the specified element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,pos1,pos2,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in vector : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"Enter the starting position you want to erase : "<<endl;
    cin>>pos1;
    cout<<"Enter the Ending position you want to erase : "<<endl;
    cin>>pos2;
    v.erase(v.begin()+pos1-1,v.begin()+pos2-1);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}


