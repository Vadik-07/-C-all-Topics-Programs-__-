# include<iostream>
using namespace std;
int main(){

    // int Example

    int a = 10;
    int *aptr = &a;
    cout<<aptr<<endl;

    aptr++;
    cout<<aptr<<endl;

    // Char Example

    char ch = 'a';
    char *cptr = &ch;
    cout<<ch<<endl;
    cout<<cptr<<endl;

    cptr++;
    cout<<cptr<<endl;

    return 0;
}