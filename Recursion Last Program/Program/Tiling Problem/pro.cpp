#include<iostream>
#include<string>
using namespace std;

int tilingWays(int n){
    int count = 0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1) + tilingWays(n-2);
}

int main(){

    int n;
    cout<<"Enter your Number : ";
    cin>>n;

    cout<<"Number of Tiling Ways are "<<tilingWays(n)<<endl;

    return 0;
}