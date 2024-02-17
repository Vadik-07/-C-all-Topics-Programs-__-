# include<bits/stdc++.h>
using namespace std;

bool pairofsum(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] + arr[n] < k){
            arr[i] = arr[i+1];  
        } else if(arr[i] + arr[n] > k){
            arr[n] = arr[n-1];
        } else {
            return true;
        }
    }
    return false;
}
int main(){

    int n;
    cout<<"Enter Your Numbr of Elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Your Sorted Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Which Element do you want to find : ";
    cin>>k;

    cout<<pairofsum(arr,n,k);
    return 0;
}