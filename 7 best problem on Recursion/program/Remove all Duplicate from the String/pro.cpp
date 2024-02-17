#include<iostream>
#include <string>
using namespace std;

string duplicateRemover(string str){
    if(str.size() == 0){
        return "";
    }

    char ch = str[0];
    string ans = duplicateRemover(str.substr(1));

    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main(){

    string str;
    cout<<"Enter Your String : ";
    getline(cin,str);

    cout<<duplicateRemover(str)<<endl;
    
    return 0;
}