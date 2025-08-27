#include <iostream>
#include<math.h>
using namespace std;
int main() {
/*int n;
cin >> n;

if (n == 0) {
cout << "Answer is: 0" << endl;
return 0;
}

string binary = "";
    while (n != 0) {
        int bit = n & 1;
        binary = to_string(bit) + binary;  // Prepend the bit to the binary string
        n = n >> 1;
    }

    cout << "Answer is: " << binary << endl;
    return 0;*/


    int n;
    int i=0,ans=0;
    cin>>n;
    while(n!=0)
    {
        int bit = n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}
