# include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter Your Array Row : ";
    cin>>n;
    cout<<"Enter Your Array Coloums : ";
    cin>>m;
    
    int arr[n][m];
    cout<<"Enter Your Matrix"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Whiich Element do you want to find : ";
    cin>>target;

    int s = 0, found = false;
    while(s < n && m>=s){
        if(arr[s][m] == target){
            found = true;
            break;
        } else if(arr[s][m] > target){
            m--;
        } else{
            s++;
        }
    }
    if(found){
        cout<<"Element is Present in 2D array";
    } else {
        cout<<"\nElement not present in 2D array"<<endl;
    }
    return 0;
}