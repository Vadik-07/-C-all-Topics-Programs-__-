#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int arr1[n1], arr2[n2];  // Temp Arrays

    // Copy data to temporary arrays arr1[] and arr2[]
    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        arr2[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;  // Reset k to l, not 0
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {  // Corrected the condition from < to <=
            arr[k] = arr1[i];
            k++, i++;
        } else {
            arr[k] = arr2[j];
            k++, j++;
        }
    }

    // Copy the remaining elements of arr1[], if there are any
    while (i < n1) {
        arr[k] = arr1[i];
        k++, i++;
    }

    // Copy the remaining elements of arr2[], if there are any
    while (j < n2) {
        arr[k] = arr2[j];
        k++, j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;  // Avoid overflow for large l and r values
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array to be sorted: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);  // Pass n-1 as the upper bound
    cout << "Your sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
