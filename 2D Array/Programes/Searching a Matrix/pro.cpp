# include<iostream>
using namespace std;
int main (){
int n,m;
    cout<<"Enter Your Row : ";
    cin>>n;
    cout<<"Enter Your Coloum : ";
    cin>>m;

    cout<<"Enter Your Matrix : ";
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    int k;
    cout<<"Enter Which Elment do you Want to Find : ";
    cin>>k;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == k){
                cout<<"Element was Found in "<<i<<" Row "<<j<<" Coloum"<<endl;
                return 0; 
            }
        }
    }
    cout<<"Element not Find"<<endl;
    return 0;
}