# include<iostream>
using namespace std;
int main(){

int sidea, sideb, sidec;

cout<<"Enter your First Triangle Side : ";
cin>>sidea;

cout<<"Enter your Secound Triangle Side : ";
cin>>sideb;

cout<<"Enter your Third Triangle Side : ";
cin>>sidec;

if(sidea == sideb && sideb == sidec){
  cout<<"Equaliteral Triangle"<<endl;
} else if(sidea == sideb || sidea == sidec || sideb == sidec){
   cout<<"Isosceles Triangles"<<endl;
 } else{
   cout<<"Scaler Triangle";
 }
return 0;
}