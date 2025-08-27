#include<iostream>
using namespace std;

void reverse(string& name,int i,int j)
{
    //base case
    if(i>=j)
        return ;

    swap(name[i],name[j]);

    reverse(name,i+1,j-1);
}



int main()
{
    string name="";
    cin>>name;
    string temp=name;

    reverse(name,0,name.length()-1);
    if(temp==name)
    cout<<"is palindrome"<<endl;
    else
    cout<<"not palindrome"<<endl;

}