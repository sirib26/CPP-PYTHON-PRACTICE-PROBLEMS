#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        int start = i-1;
        while(start)
        {
            cout<<start;
            start-=1;
        }
        cout<<endl;
    }*/
    int a=1,b=2;
    if(a-->0 || ++b>2)
    cout<<"stage 1";
    else
    cout<<"stage 2";
    cout<<a<<b<<endl;
}