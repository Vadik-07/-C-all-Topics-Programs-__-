#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Size of Array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 1; // Renamed "cout" to "count"
    while (count < n) {
        for (int i = 0; i < n - count; i++) { // Changed i=1 to i=0
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++; // Moved the increment inside the while loop
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

