//This function is used to provide the maximum size that vector can hold.
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
    cout<<"\nMax size of vector is : "<<v.max_size();
}
