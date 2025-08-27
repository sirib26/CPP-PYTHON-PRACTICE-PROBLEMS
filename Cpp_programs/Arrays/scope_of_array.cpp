// #include <iostream>
// using namespace std;

// void update(int arr[],int size){

//     cout<<"Inside the funtion"<<endl;
//     //arr[0]=2;
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     cout<<"going back to main"<<endl;
// }

// int main() {
//     int arr[]={1,2,3,4,5};

//     update(arr,3);
//     cout<<"printing in the main funtion"<<endl;
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int summi(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


int main() {
    // Your code goes here
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"sum of all elements of an array:"<<summi(arr,n);

    return 0;
}

