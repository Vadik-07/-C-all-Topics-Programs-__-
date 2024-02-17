# include<iostream>
using namespace std;
int main(){

int num1, num2, num3;
cout<<"Enter Your First Number : ";
cin>>num1;
cout<<"Enter Your Secound Number : ";
cin>>num2;
cout<<"Enter Your Thired Number : ";
cin>>num3;

 if(num1 > num2){
   if(num1 > num3){
     cout<<"Maximum Number is : "<<num1;
   } else {
            cout<<"Maximun Number is "<<num3;
          }
 } else if(num2 > num1){
   if(num2 > num3){
     cout<<"Maximun Number is : "<<num2;
   } else {
      cout<<"Maximun Number is "<<num3;
     }
 } else{
     cout<<"Maximun Number is "<<num3;
   }

return 0;
}