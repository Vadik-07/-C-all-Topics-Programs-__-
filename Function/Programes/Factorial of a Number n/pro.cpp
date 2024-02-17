# include<iostream>
using namespace std;

void fact(int num){
    int sum = 1;
  for(int i=1; i<=num; i++){
     sum *= i;
  }
 cout<<sum<<endl;
 return;
}

int main(){

int n;
cout<<"Enter Which Factorail Number Do You Want : ";
cin>>n;

fact(n);

return 0;
}