#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a Positive Number : ";
cin>>n;

int sum = 1;
for(int i=1; i<=10; i++){
 sum = n * i;
 cout<<sum<<"\n";
}

return 0;
}