# include<iostream>
# include<cmath>
using namespace std;

int binarytodecimal(int n){
    int last_digit;
    int sum = 0;
    int p = 0;
    while(n>0){
        last_digit = n%10;
        if(last_digit == 1){
            sum = sum + (1*(pow(2,p)));
        } else {
            sum = sum + (0*(pow(2,p)));
        }
        n=n/10;
        p++;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter Your Number : ";
    cin>>n;

    cout<<binarytodecimal(n)<<endl;
}