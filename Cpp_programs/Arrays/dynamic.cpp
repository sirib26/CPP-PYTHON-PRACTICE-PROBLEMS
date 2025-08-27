#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    //creating a 2d array
    int** ar = new int*[n];
    for(int i=0;i<n;i++)
    ar[i] = new int[n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        delete [] ar[i];
    }

    delete [] ar;

    return 0;
}