# include<iostream>
# include<cmath>
using namespace std;

int DecimalToBinary(int n){
    int temp_n = n;
    int First_digit = n%2;
    int up_last_digit;
    int last_digit_1;
    int main_ans = 0;
    int up_ans = 0;

    if( First_digit == 1){
        while(temp_n > 0){
            up_last_digit = temp_n%10;
            temp_n = n/2;
            up_ans = up_ans*10 + temp_n;
            temp_n = temp_n/10;
        }
        while(main_ans > 0){
            last_digit_1 = main_ans%10;
            main_ans = main_ans*10 + last_digit_1;
            main_ans = main_ans/10;
        }
    }
    return main_ans;
}

int main(){

    int n;
    cout<<"Enter Your Decimal Number : ";
    cin>>n;

    cout<<"Your Decimal Number "<<n<<" in Binary is "<<DecimalToBinary(n)<<endl;

    return 0;
}