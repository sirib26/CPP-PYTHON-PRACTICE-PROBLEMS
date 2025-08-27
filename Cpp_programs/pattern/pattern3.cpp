#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    int temp=1;
    while (i<=n){

        int j=1;
        while(j<=n){
            cout<<temp<<" ";
            j=j+1;
            temp++;
        }
        cout<<endl;
        i=i+1;
    }

}