#include<iostream>
using namespace std;

bool linearsearch(int *arr,int size,int key)
{
    if(size<=0)
        return false;
    
    if(arr[size-1]==key)
        return true;

    return linearsearch(arr,size-1,key);
}

int main()
{

    int arr[5]={1,2,3,4,5};
    int size=5;
    int key;
    cin>>key;

    bool found = linearsearch(arr,size,key);

    if(found)
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;

}