# include<bits/stdc++.h>
using namespace std;

bool pairofsum(int arr[], int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == k){
                return true;
            }
        }
    }
    return false;
}
int main(){

    int n;
    cout<<"Enter Your Number Of Elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Your Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter Your Pair of sum to Find : ";
    cin>>k;

    cout<<pairofsum(arr, n, k);
    return 0;
}