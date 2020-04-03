//This function removes all the elements from the vector.
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
    v.clear();
    cout<<"\nAfter removing element is : ";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

