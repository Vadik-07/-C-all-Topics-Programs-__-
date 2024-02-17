# include<iostream>
# include<string>
using namespace std;

string xAtLast(string str){
    if(str.length() == 0){
        return "";
    }

    char ch = str[0];
    string ans = xAtLast(str.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    string str;
    cout<<"Enter your String : ";
    getline(cin,str);

    cout<<xAtLast(str);

    return 0;
}