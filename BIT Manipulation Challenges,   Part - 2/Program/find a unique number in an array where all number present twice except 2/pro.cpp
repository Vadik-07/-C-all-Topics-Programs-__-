#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum ^= arr[i];
    }

    int tempxor = xorsum;
    int pos = 0;

    while ((xorsum & 1) != 1) {
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i = 0; i < n; i++){
        if(setBit(arr[i], pos)){
            newxor ^= arr[i];
        }
    }

    cout << "Unique elements: " << newxor << " and " << (tempxor ^ newxor) << endl;
}

int main(){
    int arr[] = {1, 2, 3, 1, 3, 2, 5, 7};
    unique(arr, 8);

    return 0;
}