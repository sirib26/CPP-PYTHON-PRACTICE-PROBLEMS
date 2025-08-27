#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int digit,sum=0,pro=1;
    while(n!=0){
    digit=n%10;
    cout<<digit<<" ";
    cout<<endl;
    sum+=digit;
    pro*=digit;
    n=n/10;
    }
    cout<<"sum"<<sum<<endl;
    cout<<"product"<<pro<<endl;
    int res=pro-sum;
    cout<<"result"<<res<<endl;
}