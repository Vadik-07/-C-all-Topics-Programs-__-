#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key, int i){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstOccurrence(arr, n, key, i+1);
}

int lastOccurrence(int arr[], int n, int key, int i){
    if(i == n){
        return -1;
    }
    int restArr = lastOccurrence(arr, n, key, i+1);
    if(restArr != -1){
        return restArr;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main(){

    int arr[] = {4, 2, 1, 7, 5, 2, 7};
    cout << "First occurrence: " << firstOccurrence(arr, 7, 7, 0) << endl;
    cout << "Last occurrence: " << lastOccurrence(arr, 7, 7, 0) << endl;

    return 0;
}
