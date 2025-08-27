#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    string binary="";
    while(n!=0)
    {
       // int bit = n&1;
        //binary=to_string(bit)+binary;
        if(n&1)
        {
        count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
}