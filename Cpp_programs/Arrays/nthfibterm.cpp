#include<iostream>
using namespace std;

int fib(int n)
{
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    if(n==1)
    {
        return a;
    }
    if(n==2)
    {
        return b;
    }
    int sum=0;
    for(int i=3;i<=n;i++)
    {
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
    }
    return sum;
}
int main()
{
   
    int n;
    cin>>n;
    
    int nth=fib(n);
    cout<<"the nth term is:"<<nth<<endl;
    return 0;
}