#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;  

    int remaining = amount;

    switch (1) {
        case 1:
            cout << "100 x " << remaining / 100 << endl;
            remaining = remaining % 100;    
        case 2:
            cout << "50 x " << remaining / 50 << endl;
            remaining = remaining % 50;  
        case 3:
            cout << "20 x " << remaining / 20 << endl;
            remaining = remaining % 20;  
        case 4:
            cout << "10 x " << remaining / 10 << endl;
            remaining = remaining % 10;
            break;                     
    }

    return 0; 
}
