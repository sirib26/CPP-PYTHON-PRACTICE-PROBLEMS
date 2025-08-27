#include<iostream>
#include<vector>
using namespace std;
int rowwisesum(int ar[][3],int i,int j)
{
  
    for(int i=0;i<3;i++)
    {
          int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=ar[i][j];
    }
    
    cout<<"sum of " <<i+1<<"row: " <<sum<<endl;
    }
}
int colwisesum(int ar[][3],int i,int j)
{
  
    for(int j=0;j<3;j++)
    {
          int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=ar[i][j];
    }
    
    cout<<"sum of " <<j+1  <<"col: " <<sum<<endl;
    }
}

bool present(int arr[][3],int row,int col,int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == k)
            return 1;
        }
    }
    return 0;
}

int largestrow(int arr[][3],int i,int j)
{
    int max=-1,index;
    for(int i=0;i<3;i++)
    {
          int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=arr[i][j];
    }
     if(sum>max)
     max=sum;
    index = i+1;
    }
    return index;
}

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cin>>arr[i][j];
    int key;
    cin>>key;

    rowwisesum(arr,3,3);
    colwisesum(arr,3,3);
    int ans = largestrow(arr,3,3);
    cout<<"largest row : "<< ans;

    if(present(arr,3,3,key))
    {
        cout<<"found"<<endl;
    }
    else
    cout<<"not found"<<endl;

    return 0;
}