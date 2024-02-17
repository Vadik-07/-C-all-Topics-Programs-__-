# include<iostream>
# include<string>
using namespace std;

void allSubstring(string str, string ans){
    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    string ros = str.substr(1);

    allSubstring(ros,ans);
    allSubstring(ros,ans+ch);
}

int main(){

    string str;
    cout<<"Enter your String : ";
    getline(cin,str);

    allSubstring(str,"");

    return 0;
}