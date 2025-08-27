#include<iostream>
using namespace std;
int main()
{
    int n;int k;
    string s;
    string t="";
    cin>>n>>k;

    cin>>s;
    for(int i=0;i<k;i++)
    {
        t+=s;
        cout<<t;
    }
    
    cout<<endl;

    
    int maxi=-1;
     int count = 0;
    for(int i=0;i<n*k;i++)
    {
       
        if(t[i]=='0'){
        count++;
        }
        else
        count=0;

        if(count>maxi)
        maxi=count;
    }
    cout<<maxi;
}