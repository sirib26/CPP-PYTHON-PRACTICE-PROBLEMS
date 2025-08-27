#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int arr[8] = {6, 59, 35, 53, 53, 97, 17, 7};

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            int sum = arr[i] + arr[j];
            if (isprime(sum))
                for (int k = 0; k < 8; k++)
                    if (arr[k] == sum) {
                        cout << k;
                        return 0;
                    }
        }
    }

    return -1;
}
