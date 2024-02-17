# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter Your Size of Array : ";
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
cin>>arr[i];
}

int rc = 0;
int j=1;

if(n == 1){
cout<<"Number of Record Breakers days : 1";
 return 0;
} else {
for(int i=0; i<n; i++){
   if(arr[j]>arr[j+1]){
     for(int j=0; j<=i; j++){
        if(arr[j]>arr[i]){
          rc++;         
        }
     }
   }
 j++;
}
}
cout<<"Number of Record Breakers days : "<<rc;
return 0;
}