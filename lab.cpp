#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cout << "size ";
    cin >> n;
    cout << "elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int part = n / 3;
    for (int i = 0; i < part; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = part; i < 2 * part; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 2 * part; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
