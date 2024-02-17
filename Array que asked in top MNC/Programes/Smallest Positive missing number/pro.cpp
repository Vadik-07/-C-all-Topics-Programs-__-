# include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Your Number of Elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Your Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    const int N = 1e10;
    bool check[N];
    for(int i=0; i<N; i++){
        check[N] == 0;   // 0 can also be false;
    }

    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;   // can be 1 also
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(check[i] == 0){
            ans = i;
            break;
        }
    }
    cout<<"Smallest Mising Positive Number : "<<ans<<endl;

    return 0;
}