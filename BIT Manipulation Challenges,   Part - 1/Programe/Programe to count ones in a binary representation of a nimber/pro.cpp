# include<iostream>
using namespace std;

int onesinbinary(int n){
    int count = 0;
    while(n != 0){
        n = n & n-1;
        count++;
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter Your Number : ";
    cin>>n;

    cout<<"Number of 1's in Binary representation is : "<<onesinbinary(n);
    return 0;
}