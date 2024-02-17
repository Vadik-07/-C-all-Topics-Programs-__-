# include<iostream>
# include<string>
using namespace std;
int main(){

    string s1 = "nincompoop";

    //   Erase Function
    //   s1.erase(3,3);
    //   cout<<s1<<endl;

    //   Find Function
    cout<<s1.find("com")<<endl;
    cout<<s1.find("poop")<<endl;

    //   Insert Function
    cout<<s1.insert(2, "lol")<<endl;

    //   Size Function
    cout<<s1.size()<<endl;

    /*
          Lenght Function
          it is Used to Iterate over every word
    */

   //    s1.length();

   for(int i=0; i<s1.length(); i++){
    cout<<s1[i]<<endl;
   }
    
    return 0;
}