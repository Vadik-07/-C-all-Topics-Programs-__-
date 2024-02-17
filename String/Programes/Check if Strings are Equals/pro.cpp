# include<iostream>
# include<string>
using namespace std;
int main(){

    string s1, s2;
    cout<<"Enter Your First String : ";
    getline(cin, s1);
    cout<<"Enter Your Secound String : ";
    getline(cin, s2);

    if(s1.compare(s2) == 0){
        cout<<"Your Strings are equals";
    } else {
        cout<<"Your Strings are not Equals";
    }

    cout<<s1.compare(s2)<<endl;

    return 0;
}