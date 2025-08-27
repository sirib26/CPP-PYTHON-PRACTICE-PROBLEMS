#include<iostream>
using namespace std;

int update(int a){
    int ans=a*a;
    a=15;
    cout<<"update function a:"<<a<<endl;
    return ans;
}
int main(){
    int a=14;
    update(a);
    cout<<a<<endl;
    int arr[20]={1,2,3,4,5};
    cout<<sizeof(arr)/sizeof(int)<<endl;
}