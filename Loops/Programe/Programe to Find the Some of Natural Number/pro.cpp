# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter your Number : ";
cin>>n;

int sum = 0;
for(int i=1; i<=n; i++){
sum = sum + i;
}
cout<<"The Sum of "<<n<<" Number is : "<<sum;

return 0;
}