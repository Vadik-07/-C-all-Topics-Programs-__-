# include<iostream>
using namespace std;

void sum(int n){
int ans = 0;
  for(int i=1; i<=n; i++){
     ans+=i;
  }
  cout<<"Your Sum is : "<<ans;
 return;
}

int main(){

int n;
cout<<"Enter Your Number : ";
cin>>n;

sum(n);

return 0;
}