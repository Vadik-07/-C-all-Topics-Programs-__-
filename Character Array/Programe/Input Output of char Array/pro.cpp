# include<iostream>
using namespace std;
int main(){

    char arr[100] = "apple banana";
    int i=0;

    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }

    char arr1[50];

    cin>>arr1;
    cout<<arr1<<endl;

    cout<<arr1[2];
    return 0;
}