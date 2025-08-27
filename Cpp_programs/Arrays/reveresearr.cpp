#include<iostream>
using namespace std;

void reversearr(int a[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[5]={1,2,3,4,5};
    int b[4]={1,2,3,4};

    reversearr(a,5);
    reversearr(b,4);

    printarray(a,5);
    printarray(b,4);

}