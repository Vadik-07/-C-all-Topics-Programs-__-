# include<iostream>
using namespace std;
int main(){

int r, c;
cout<<"Enter your Row : ";
cin>>r;

cout<<"Enter your Column : ";
cin>>c;

for(int i=1; i<=r; i++){
for(int j=1; j<=c; j++){
if(i==1 || i==r || j==1 || j==c){
cout<<"*";
} else {
cout<<" ";
}
}
cout<<endl;
}

return 0;
}