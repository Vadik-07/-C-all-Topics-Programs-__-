# include<iostream>
using namespace std;

void primeFactorisation(int n){
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            cout<<i;
            n/=i;
            if(n > 1){
                cout<<"*";
            }
        }else{
            i++;
        }
    }
}
int main(){

    int n;
    cout<<"Which Number Prime Factorisation do you want : ";
    cin>>n;

    primeFactorisation(n);

    return 0;
}