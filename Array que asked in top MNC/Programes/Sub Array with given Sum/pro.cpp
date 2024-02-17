# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter Your Number of Elements : ";
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
cin>>arr[i];
}

int s;
cout<<"Enter which Number Sum do you want to find : ";
cin>>s;

int ans = 0;
for(int i=0; i<n; i++){
   for(int j=i; j<n; j++){
      ans = ans + arr[j];
      if(ans == s){
        cout<<i+1<<" "<<j+1;
        return 0;
      }
   }
ans = 0;
}
cout<<"Element Not Found";

return 0;
}