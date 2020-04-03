//This function assigns new values to the vector and replacing the old ones.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in vector : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    vector<int> v1;
    v1.assign(v.begin()+1,v.end()-1);
    cout<<"Element of the vector1 is : "<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}

