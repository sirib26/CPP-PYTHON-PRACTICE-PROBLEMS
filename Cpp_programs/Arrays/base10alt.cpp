#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,i=0;
    cin>>num;
    int ans=0;
    while(num!=0)
    {
        int bit=num&1;
         ans=(bit*pow(10,i))+ans;
        num=num>>1;
        i++;
    }
    cout<<ans<<endl;
    int res;
    ans=~res;
    while(res!=0)
    {
        int digit=res%10;
        if(digit==1)
        {
            res=res+pow(2,i);
        }
        i++;
        res=res/10;
    }
    cout<<res<<endl;
}