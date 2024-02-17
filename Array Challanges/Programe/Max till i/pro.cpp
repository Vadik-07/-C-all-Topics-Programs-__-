# include<iostream>
using namespace std;
int main(){

int mx = -99999999;
int n;
cout<<"Enter Your Size of Array : ";
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
   cin>>arr[i];
}

for(int i=0; i<n; i++){
   mx = max(mx , arr[i]);
   cout<<mx<<endl;
}

return 0;
}