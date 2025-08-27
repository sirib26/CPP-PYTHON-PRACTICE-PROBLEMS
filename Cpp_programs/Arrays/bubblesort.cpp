#include<iostream>
using namespace std;
/*int main()
{
    int arr[5]={5,4,3,2,1};
    int n=5;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }

    cout<<"sorted array is: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}*/

void bubblesort(int arr[],int n)
{
    //base case
    if(n<=1)
        return ;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bubblesort(arr,n-1);
}

int main()
{
    int arr[20]={5,3,4,2,9,22,100,3,};
    int n =8;

    bubblesort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}