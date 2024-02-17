# include<iostream>
# include<cmath>
using namespace std;

int octaltodecimal(int n){
    int last_digit = 0;
    int num = 0;
    int p = 0;
    while(n>0){
        last_digit = n%10;
        num = num + (last_digit*pow(8,p));
        p++;
        n=n/10;
    }
    return num;
}

int main(){

    int n;
    cout<<"Enter Your Octal Number : ";
    cin>>n;

    cout<<"Your Octal Number "<<n<<" in Decimal is "<<octaltodecimal(n)<<endl;
    return 0;
}