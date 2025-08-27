#include<iostream>
using namespace std;
int main()
{
    bool b = false;
    cout<<b;
   
    int a = 'A';
    cout<<a<<endl;
    
    char ch = 65;
    cout<< ch << endl;
    int a=2;
    int b=a+1;
    
    if((a=3)==b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"upper case"<<endl;
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"lower case"<<endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"numeric"<<endl;
    }
    
   int n = 10;
  for(int i=0;i<=n;i++)
  {
    cout<<i<<" ";
  }
  return 0;
    
}