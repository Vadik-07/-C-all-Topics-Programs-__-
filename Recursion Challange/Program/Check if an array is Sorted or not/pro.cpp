# include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool restarr = sorted(arr+1, n-1);

    return (arr[0] < arr[1] && restarr);
}

int main(){

    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    cout<<sorted(arr,n);

    return 0;
}