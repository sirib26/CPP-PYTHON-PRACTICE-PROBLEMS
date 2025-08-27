#include<iostream>
using namespace std;

int power(int a,int b)
{
    //base case two one if 2 power 0 is 1 and 2 power 1 is 2
    if(b==0)
        return 1;
    if(b==1)
        return a;

    //recursive call for finding powers
    int ans = power(a,b/2);

    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    int ans=power(a,b);
    cout<<"answer is: "<<ans<<endl;

    return 0;
}