#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = s + (e - s) / 2;

    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *arr1 = new int[l1];
    int *arr2 = new int[l2];

    for (int i = 0; i < l1; i++) {
        arr1[i] = arr[s + i];
    }
    for (int i = 0; i < l2; i++) {
        arr2[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int ind = s;
    while (i < l1 && j < l2) {
        if (arr1[i] < arr2[j]) {
            arr[ind++] = arr1[i++];
        } else {
            arr[ind++] = arr2[j++];
        }
    }
    while (i < l1) {
        arr[ind++] = arr1[i++];
    }
    while (j < l2) {
        arr[ind++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}

void sort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = s + (e - s) / 2;
    sort(arr, s, mid);
    sort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
