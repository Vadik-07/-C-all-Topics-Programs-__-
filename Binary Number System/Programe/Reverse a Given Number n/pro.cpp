# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter Number Which You Want to Reverse : ";
cin>>n;

int reverse = 0;
while(n>0){
int lastdigit = n%10;
reverse = reverse*10 + lastdigit;
n=n/10;
}

cout<<"Your Reverse number is : ";
cout<<reverse<<endl;

return 0;
}