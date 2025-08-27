#include<iostream>
using namespace std;

void cyclic_rotate(string &s) {
    char last = s[s.size() - 1];
    for (int i = s.size() - 1; i > 0; i--) {
        s[i] = s[i - 1];
    }
    s[0] = last;
}

int main() {
    int n, m;
    string s, t;

    cin >> n >> m;
    cin >> s;
    cin >> t;

    for (int i = 0; i < m; i++) {
        cyclic_rotate(s);
    }

    cout << s;
    int sum=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==t)
        sum+=i;

    }
    cout<<sum;
    return 0;
}
