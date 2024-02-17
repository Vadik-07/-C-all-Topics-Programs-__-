#include<iostream>
# include<cmath>
using namespace std;
int main(){

int n;
cout<<"Enter Your Number : ";
cin>>n;

bool flag = 0;

for(int i=2; i<=sqrt(n); i++){
 if(n%i==0){
   cout<<"It's non Prime Number";
   flag=1;
   break;
 }
}

if(flag == 0){
 cout<<"It's a Prime Number";
}

return 0;
}