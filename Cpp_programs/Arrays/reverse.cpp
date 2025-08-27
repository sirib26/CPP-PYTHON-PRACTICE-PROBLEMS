#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    while(n!=0)
    {
        int digit=n%10;
        if((rev>INT16_MAX/10) || (rev<INT16_MIN/10))
        {
            return 0;
        }
        rev=(rev*10)+digit;
        n=n/10;
    }
    cout<<rev<<endl;
}