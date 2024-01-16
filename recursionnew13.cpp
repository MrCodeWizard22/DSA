#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 4; 
    for (int i = n; i >= 1; --i) {
        for (int j = n; j > i; --j) {
            cout << j;
        }
        for (int k = 2 * (n - i); k > 0; --k) {
            cout << i;
        }
        for (int j = i + 1; j <= n; ++j) {
            cout << j;
        }
        cout << endl;
    }

    for (int i = 2; i <= n; ++i) {
        for (int j = n; j > i; --j) {
            cout << j;
        }
        for (int k = 2 * (n - i); k > 0; --k) {
            cout << i;
        }
        for (int j = i + 1; j <= n; ++j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
