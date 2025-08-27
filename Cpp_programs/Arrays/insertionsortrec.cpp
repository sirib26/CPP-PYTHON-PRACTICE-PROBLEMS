#include<iostream>
using namespace std;
/*int main()
{
    int arr[16]={5,4,3,2,1,6,7,8,9,2,4,3,55,22,44,33};
    int n=16;

    for(int i=1;i<n;i++)
    {
        int val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=val;
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}*/

void insertionsort(int arr[],int n)
{
    //base case
    if(n<=1)
    return ;

    cout<<"step "<<n<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    insertionsort(arr,n-1);
    
     int val=arr[n-1];
        int j=n-2;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=val;

    cout<<"step "<<n<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    
}

int main()
{
    int arr[5]={5,4,3,2,1};
    int n=5;

    insertionsort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
