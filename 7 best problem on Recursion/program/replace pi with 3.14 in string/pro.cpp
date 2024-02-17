#include<iostream>
#include<string>
using namespace std;

void replacePi(string str) {
    if (str.size() == 0) {
        return;
    }

    if (str[0] == 'p' && str[1] == 'i') {
        cout << "3.14";
        replacePi(str.substr(2));
    } else {
        cout << str[0];
        replacePi(str.substr(1));
    }
}

int main() {
    string str;
    cout << "Enter your String : ";
    getline(cin, str);

    cout << "After replacing 'pi' with '3.14': ";
    replacePi(str);

    return 0;
}
