#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int k)
{
    //base case
    if(s>e)
        return false;

    int mid=(s+e)/2;

    if(arr[mid]==k)
        return true;
    else if(arr[mid]<k)
        return binarysearch(arr,mid+1,e,k);
    else
        return binarysearch(arr,s,mid-1,k);
}


int main()
{
    int arr[5]={1,2,3,4,5};
    int s=0;
    int e=4;
    int key;
    cin>>key;

    bool found = binarysearch(arr,s,e,key);

    if(found)
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;
}