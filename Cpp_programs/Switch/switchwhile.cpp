#include<iostream>
using namespace std;

int main()
{
    int num;

    while(true)
    {
        cout << "Enter a number (0 to exit): ";
        cin >> num;

        switch(num)
        {
            case 1 : 
                cout << "one" << endl;
                break;
            case 2 : 
                cout << "second" << endl;
                continue;
            case 3 : 
                cout << "third" << endl;
                break;
            case 0 : 
                return 0; // Exit the program
            default : 
                cout << "default case" << endl;
                return 0; // Exit the program
        }
    }
}
