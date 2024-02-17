# include<iostream>
# include<climits>
using namespace std;
int main(){

int n;
cout<<"Enter Your Size of Array : ";
cin>>n;
int arr[n];
for(int i=1; i<=n; i++){
cin>>arr[i];
}

int maxno = INT_MIN;
int minno = INT_MAX;

for(int i=0; i<n; i++){
int maxno = max(maxno, arr[i]);
int minno = min(minno, arr[i]);
}

cout<<"Your Maximum Number is : "<<maxno;
cout<<"Your Minimum Number is : "<<minno;

return 0;
}