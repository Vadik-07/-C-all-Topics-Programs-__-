#include<iostream>
#include<string>
using namespace std;

void permutationOfString(string str, string ans){
    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }
    
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        string ros = str.substr(0,i)+str.substr(i+1);
        permutationOfString(ros,ans+ch);
    }
    
}

int main(){

    string str;
    cout<<"Enter Your String : ";
    getline(cin,str);

    permutationOfString(str,"");

    return 0;
}