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

    int part_size = n / 3;
    for (int i = 0; i < part_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = part_size; i < 2 * part_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 2 * part_size; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
