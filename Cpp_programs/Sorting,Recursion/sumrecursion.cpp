#include<iostream>
using namespace std;

int sumans(int arr[],int size)
{

    if(size<1)
        return 0;

    return arr[size-1]+sumans(arr,size-1);
}



int main()
{
    int arr[5]={1,2,3,4,5};

    int ans = sumans(arr,5);

    cout<<ans<<endl;
}