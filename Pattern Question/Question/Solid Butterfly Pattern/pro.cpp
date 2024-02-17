# include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter your Number : ";
    cin>>n;

    for(int i=1;i<=n; i++){                                  // This Question can also be done by 
        for(int j=1; j<=i; j++){                             // This Formula
            cout<<"*";                                       // 2 * n - 2 * i
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
