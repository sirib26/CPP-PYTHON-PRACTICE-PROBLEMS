#include<iostream>
using namespace std;
/*int main()
{
    int arr[13]={5,4,3,2,1,6,22,33,100,4,3,86,34};
    int n=13;

    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        swap(arr[i],arr[min]);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}*/

void selectionsort(int *arr,int n)
{
    //base case
    if(n<=1)
        return ;

    int min=0;
    for(int j=1;j<n;j++)
    {
        if(arr[min]>arr[j])
        min=j;
    }
    swap(arr[0],arr[min]);

    selectionsort(arr+1,n-1);
}

int main()
{
    int arr[13]={5,4,3,2,1,6,22,33,100,4,3,86,34};
    int n=13;

    selectionsort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}