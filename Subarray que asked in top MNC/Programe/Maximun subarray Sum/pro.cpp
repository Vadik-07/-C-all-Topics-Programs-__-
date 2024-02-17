# include<iostream>
# include<climits>
using namespace std;
int main(){

int n;
cout<<"Enter Your Elements : ";
cin>>n;

cout<<"Enter Your Array : ";
int arr[n];
for(int i=0; i<n; i++){
  cin>>arr[i];
}

int sum1 = INT_MIN;
int sum2 = INT_MIN;
int mx;
for(int i=0; i<n; i++){
  for(int j=i; j<n; j++){
  sum1 = 0;
    for(int k=i; k<n; k++){
      sum1 = sum1 + arr[k];
      if(sum1 >= sum2){
        mx = max(sum1, sum2);
        sum2 = sum1;
      } else{
           mx = sum2;
        }
    }
  }
}

cout<<"Maximum Subarray Sum is : "<<mx;

return 0;
}