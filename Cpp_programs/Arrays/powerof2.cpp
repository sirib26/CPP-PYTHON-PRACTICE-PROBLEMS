#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    int flag=0;
    cin>>num;
    for(int i=0;i<=30;i++)
    {
        int res=pow(2,i);
        if(num==res)
        flag=1;
        
    }
    if(flag)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
}