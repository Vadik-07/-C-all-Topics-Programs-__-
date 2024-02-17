# include<iostream>
using namespace std;

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}

int main(){

    int n;
    cin>>n;

    cout<<"Decreasing Order : ";
    dec(n);

    cout<<"\nIncreasing Order : ";
    inc(n);


    return 0;
}