// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b=1;
//     a=10;
//     if (++a){
//         cout<< b;
//     }
//     else{
//         cout<<++b;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     int b=2;

//     if(a-- > 0 || ++b>2){
//         cout<<"stage-1"<<endl;
//     }
//     else{
//         cout<<"stage-2"<<endl;
//     }
//     cout<<a<<" "<<b<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<=5; i++){
//         cout<< i <<" ";
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<=5; i--){
//         cout<< i <<" ";
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<=15; i+=2){
//         cout<< i <<" ";


//         if(i&1){
//             continue;
//         }

//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j == 10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}