//This function determines the current capacity of the vector
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
    int n=v.capacity();
    cout<<"Capacity of the vector is : "<<n;
}

