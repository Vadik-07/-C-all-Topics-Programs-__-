# include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter Your Row : ";
    cin>>n;
    cout<<"Enter Your Coloum : ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Your Matrix is : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}