#include<iostream>
#include<vector>
using namespace std;
int  getlenght(char arr[])
{
    int count=0;
    for(int i=0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];
    cin>>name;
    cout<<name<<endl;

    cout<<"length of the name: "<<getlenght(name);
}