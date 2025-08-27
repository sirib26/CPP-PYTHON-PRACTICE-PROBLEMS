#include<iostream>
using namespace std;
int main()
{
    /*int i,n,sum=0;
    cout<<"enter the n value"<<endl;
    cin>>n;
    i=2;
    sum=0;
    while(i<=n)
    {
        if(i%2==0)
            sum=sum+i;
        i+=1;
    }
    cout<<sum<<endl;
    float c,f;
    cout<<"enter the temp in farenheit"<<endl;
    cin>>f;
    c=(f-32)*5/9;
    cout<<"temp in celsius: "<<c<<endl;*/
    /*int i,n;
    bool flag=1;
    cout<<"enter n"<<endl;
    cin>>n;
    i=2;
    while(i<n)
    {
        if(n%i==0)
        flag=0;
        i+=1;
    }
    if(flag)
    cout<<"prime number"<<endl;
    else
    cout<<"not a prime number"<<endl;*/
    /*int i,j,n;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
       
        for(int j=1;j<=n-i;j++)
        {
            
            cout<<' ';
           
        }
         for(int k=1;k<=i;k++)
            {
                cout<<'*';
            }
        cout<<endl;
    }*/
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        /*for(int k=1;k<=n-i;k++)
        {
            cout<<' ';
        }*/
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}