# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter Your Array : ";
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
cin>>arr[i];
}

for(int i=0; i<n; i++){
   for(int j=i+1; j<n; i++){
      if(arr[i] == arr[j]){
        cout<<i+1;
        return 0;
      }
   }
}
cout<<"No repeating element is found";

return 0;
}