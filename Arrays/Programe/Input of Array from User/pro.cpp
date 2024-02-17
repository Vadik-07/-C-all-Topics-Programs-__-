# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter your size of array : ";
cin>>n;

int array[n];

for(int i=0; i<=n; i++){
 cin>>array[i];
}

cout<<"Your Array is : ";

for(int i=0; i<n; i++){
 cout<<array[i]<<" ";
}


return 0;
}