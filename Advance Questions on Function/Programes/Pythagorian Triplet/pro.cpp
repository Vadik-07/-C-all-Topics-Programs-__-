# include<iostream>
using namespace std;

bool Check(int x , int y, int z){
 int a = max(x, max(y,z));
 int b, c;

 if(a == x){
   b = y;
   c = z;
 } else if(a == y){
    b = x;
    c = z;
   } else {
     b = x;
     c = y;
     }
if(a*a == b*b + c*c){
 return true;
} else {
   return false;
  }

}

int main(){

int x, y, z;
cout<<"Enter Your First Number : ";
cin>>x;
cout<<"Enter Your Secound Number : ";
cin>>y;
cout<<"Enter Your Thired Number : ";
cin>>z;

 if(Check(x,y,z)){
   cout<<"Pythagorian Triplet"<<endl; 
 } else {
       cout<<"Not a Pythagorian Triplet"<<endl;
   }

return 0;
}