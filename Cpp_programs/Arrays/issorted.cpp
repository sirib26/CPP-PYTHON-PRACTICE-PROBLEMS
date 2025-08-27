#include<iostream>
using namespace std;

bool issorted(int arr[],int size)
{
    if(size<=1)
        return true;

    if(arr[0] > arr[1])
        return false;
    
    return issorted(arr+1,size-1);
}

int main()
{
    int arr[5] = {1,2,3,5,5};

    bool ans = issorted(arr,5);

    if(ans)
    cout<<"is sorted"<<endl;
    else
    cout<<"is not sorted"<<endl;
}