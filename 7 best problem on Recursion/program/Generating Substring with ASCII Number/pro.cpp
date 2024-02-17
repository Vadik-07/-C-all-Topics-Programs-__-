# include<iostream>
# include<string>
using namespace std;

void subseyASCII(string str,string ans){
    if(str.length() == 0 ){
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    int code = ch;
    string ros = str.substr(1);

    subseyASCII(ros,ans);
    subseyASCII(ros,ans+ch);
    subseyASCII(ros,ans + to_string(code));
}

int main(){

    string str;
    cout<<"Enter your String : ";
    getline(cin,str);

    subseyASCII(str,"");

    return 0;
}