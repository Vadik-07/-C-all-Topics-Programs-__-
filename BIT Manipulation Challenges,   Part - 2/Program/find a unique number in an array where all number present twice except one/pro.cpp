# include<iostream>
using namespace std;

int uniqueNumber(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main(){

    int arr[7] = {1,2,4,4,99,2,1};
    cout<<uniqueNumber(arr,7);

    return 0;
}