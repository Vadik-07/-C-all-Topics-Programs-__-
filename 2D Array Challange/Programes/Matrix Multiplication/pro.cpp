# include<bits/stdc++.h>
using namespace std;
int main(){

    int coloum1,row1,coloum2,row2;
    
    cout<<"Enter Your 1 Array Coloum : ";
    cin>>coloum1;
    cout<<"Enter Your 1 Array Row : ";
    cin>>row1;
    int arr1[coloum1][row1];
    cout<<"Enter Your 1 Matrix : "<<endl;
    for(int i=0; i<coloum1; i++){
        for(int j=0; j<row1; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter Your 2 Array Coloum : ";
    cin>>coloum2;
    cout<<"Enter Your 2 Array Row : ";
    cin>>row2;
    int arr2[coloum2][row2];
    if(coloum1 != row2){
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.";
    } else {
        cout<<"Enter Your 2 Matrix : "<<endl;
        for(int i=0; i<coloum2; i++){
            for(int j=0; j<row2; j++){
                cin>>arr2[i][j];
            }
        }
    }

    int ans[coloum1][row2];

    for(int i=0; i<coloum1; i++){
        for(int j=0; j<=row2; j++){
            ans[i][j] = 0;
            for(int k=0; k<row1; k++){
                ans[i][j] += arr1[i][k]*arr2[k][j]; 
            }
        }
    }

    cout<<"Your Multiplied Matrix is : "<<endl;
    for(int i=0; i<coloum1; i++){
        for(int j=0; j<row2; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}