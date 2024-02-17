# include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter Your Rows : ";
    cin>>n;
    cout<<"Entr Your Coloum : ";
    cin>>m;

    int arr[n][m];
    if(n==m){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
    } else{
        cout<<"Matrix Transpose is not Possible"<<endl; 
    }

    // Matrix Transpose

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            // Swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // printing Matrix Repose

    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}