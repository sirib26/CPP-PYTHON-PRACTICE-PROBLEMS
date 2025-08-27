#include<iostream>
using namespace std;

void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

void swapalt(int a[],int n)
{
    for(int i=0;i+1<n;i+=2)
    {
        swap(a[i],a[i+1]);
    }
}

int main()
{
    int even[4]={1,2,3,4};
    int odd[5]={1,2,3,4,5};

    swapalt(even,4);
    swapalt(odd,5);

    printarr(even,4);
    printarr(odd,5);
}

/*void sort()
{
    for(int i=0;i<=n-2;i++)
    {
        min=i;
        
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
}*/