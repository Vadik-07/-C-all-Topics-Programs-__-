# include<iostream>
using namespace std;
int main(){

    int arr[] = {10,20,30};
    cout<<arr<<endl;
    cout<<*arr<<endl;

    int *ptr = arr;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    for(int i=0;i<3; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        cout<<*(arr+i)<<" ";
        // arr++;  Illegal 
    }

    return 0;
}