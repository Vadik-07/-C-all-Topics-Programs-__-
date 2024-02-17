# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter your number : ";
cin>>n;

int sum = 0;
int originaln = n;
while(n>0){
int lastdigit = n%10;
sum = sum + lastdigit*lastdigit*lastdigit;
n=n/10;
}

if(sum == originaln){
  cout<<"It's a Armstrong Number"<<endl;
} else {
  cout<<"It's not a Armsrong Number"<<endl;
}

return 0;
}
