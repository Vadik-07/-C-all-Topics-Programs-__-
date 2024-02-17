# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a Number : ";
cin>>n;

int coot = 1;

for(int i=1; i<n; i++){
   for(int j=1; j<=n-i; j++){
        cout<<" ";
}
     for(int j=0; j<=i;j++){
      if( j == 0 || i == 0){
       coot = 1; 
} else {
   coot = coot * (i - j + 1) / j;
}
cout<<coot<<"  ";
 }
cout<<endl;
}

return 0;
}