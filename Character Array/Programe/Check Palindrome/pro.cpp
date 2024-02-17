# include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter how many letter in your Character : ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter Your Character : ";
    cin>>arr;

    // Check Palindrome

    bool palindrome = true;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            palindrome = false;
            break;
        }
    }

    if(palindrome == true){
        cout<<"It is a Palindrome Character";
    }else{
        cout<<"It is not a Palindrome Character";
    }
    return 0;
}