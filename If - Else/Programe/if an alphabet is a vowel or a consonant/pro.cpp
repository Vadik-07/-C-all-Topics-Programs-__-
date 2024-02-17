# include<iostream>
using namespace std;
int main(){

int aa;

cout<<"Enter a Alphabat : ";
cin>>aa;

if(aa == 'a' || aa == 'e' || aa == 'i' || aa == 'o' || aa == 'u' || aa == 'A' || aa == 'E' || aa == 'I' || aa == 'O' || aa == 'U'){
  cout<<"Vowel Word"<<endl;
} else {
    cout<<"Constant Word"<<endl;
  }
return 0;
}