# include<iostream>
using namespace std;

int binarysearch(int arr[], int key, int n){
int s=0;
int e=n;

while(s<=e){
int mid = (s+e)/2;
 if (arr[mid]==key){
   return mid;
 } else if(arr[mid]>key){
    return mid-1;
   } else {
       return mid+1;
     }
}
return -1;
}

int main(){

int n;
cout<<"Enter Your Size of Array : ";
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
 cin>>arr[i];
}

int key;
cout<<"Enter Which Number do you want to Find : ";
cin>>key;

cout<<binarysearch(arr, key, n)<<endl;

return 0;
}
