# include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a Number : ";
cin>>num;

if( num % 2 == 0){
  cout<<"It is a Even Number";
} else if( num % 3 == 0){
  cout<<"It is a Odd Number";
} else {
  cout<<"It is a Prime Number";
}

cout<<"\nThank You";

return 0;
}