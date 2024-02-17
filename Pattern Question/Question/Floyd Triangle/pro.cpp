# include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter your Number: ";
cin>>n;

int ccout = 1;

for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
cout<<ccout<<" ";
ccout++;
}
cout<<endl;
}

return 0;
}