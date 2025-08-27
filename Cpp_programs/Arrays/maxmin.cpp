#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int max=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int min(int a[],int n)
{
    int maxi=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=min(maxi,a[i]);
        //if(a[i]<min)
        //min=a[i];
    }
    return maxi;
}

int main()
{
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++)
    cin>>num[i];

    cout<<"maximum number is:"<<max(num,size)<<endl;;
    cout<<"minimum number is:"<<min(num,size)<<endl;;
    
}