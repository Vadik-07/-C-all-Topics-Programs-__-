# include<iostream>
using namespace std;

int fact(int num){
 int factorial = 1;
 for(int i=1; i<=num; i++){
    factorial*=i;
 }
 return factorial;
}

int main(){

int n, r;
cout<<"Enter Your n! : ";
cin>>n;
cout<<"Enter Your r! : ";
cin>>r;

int nCr = fact(n)/(fact(r)*fact(n-r));
cout<<"Your nCr is : "<<nCr<<endl;
return 0;
}