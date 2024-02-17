# include<iostream>
#include<string>
# include<algorithm>
using namespace std;;
int main(){

    string str;
    cout<<"Enter Your String : ";
    getline(cin,str);

    //  Convert lower case to upper case

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    //  Convert upper case to lower case

    for (int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    cout<<str;

    return 0;
}