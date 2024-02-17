# include<iostream>
using namespace std;
int main(){

int a, b;
char op;
cout<<"Enter Your First Number : ";
cin>>a;
cout<<"Enter Your Operater : ";
cin>>op;
cout<<"Enter Your Secound Number : ";
cin>>b;

switch (op){

  case '+':
  cout<<a+b<<endl;
  break;

  case '-':
  cout<<a-b<<endl;
  break;

  case '*':
  cout<<a*b<<endl;
  break;

  case '/':
  cout<<a/b<<endl;
  break;

  case '%':
  cout<<a%b<<endl;
  break;

  default:
  cout<<"Operater Not Found"<<endl;
  break;
    
}

return 0;












}