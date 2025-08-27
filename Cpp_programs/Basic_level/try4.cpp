#include<iostream>
using namespace std;
#include<math.h>
#include<bitset>

int main(){
    int n;
    cin>>n;
    // float ans=0;

    // int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans<<endl;


//     for(int i=31;i>=0;i--){
//         int bit = (n>>i)&1;
//         cout<<bit;
//     }

        cout<<bitset<32>(n)<<endl;

}