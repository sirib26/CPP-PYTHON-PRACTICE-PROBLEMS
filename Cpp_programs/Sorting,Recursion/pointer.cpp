#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int arr[10]={1,2,3};
    //int *p=&num;
    int *p;
    p=&num;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"size of ptr"<<sizeof(p)<<endl;
    cout<<"size of num"<<sizeof(num)<<endl;
    cout<<"address of num"<<&num<<endl;

    int *q=p;
    cout<<q<<"---"<<p<<endl;

    cout<<"size of array"<<sizeof(arr)<<endl;
    int *ptr=&arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<ptr<<endl;
    cout<<&arr<<endl;


}