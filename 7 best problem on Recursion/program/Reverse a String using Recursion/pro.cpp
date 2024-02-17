# include<iostream>
# include<string>
using namespace std;

void reverseString(string str){
    if(str.size() == 0){  // basecase
        return;
    }
    string ros = str.substr(1);
    reverseString(ros);
    cout<<str[0];
}

int main(){

    string str;
    cout<<"Enter Your String : ";
    getline(cin,str);

    reverseString(str);

    return 0;
}