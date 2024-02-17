# include<iostream
using namespace std;
int main(){

int n;
cout<<"Enter Your size of Array : ";
cin>>n;

itn arr[n];
for(int i=0; i<n; i++){
cin>>arr[i];
}

int count = 0;
for(int i=0; i<n; i++){
   count = 0;
   for(int j=i; j<n; j++){
      count += arr[j]
      cout<<arr[j]<<endl; 
   }
}

return 0;
