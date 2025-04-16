#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter element: ";
    cin >> n;

    char arr[n];
    cout << "Characters:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
