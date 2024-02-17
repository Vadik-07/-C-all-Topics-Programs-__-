# include<iostream>
using namespace std;
int main(){

int num1, num2;

cout<<"Enter your First Number : ";
cin>>num1;
cout<<"Enter Your Secound Number : ";
cin>>num2;

if(num1 == num2){
  cout<<"Both Number are Same";
} else if(num1 > num2){
  cout<<num1<<" is Greater Than "<< num2;
} else{
  cout<<num2<< " is Greater Than "<< num1;
}

return 0;
}