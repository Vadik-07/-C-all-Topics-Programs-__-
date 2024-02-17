#include<iostream>
using namespace std;

void primeNumber(int n){
    int arr[n + 1];
    for(int i = 0; i <= n; i++){
        arr[i] = 0;
    }

    for(int i = 2; i * i <= n; i++){
        if(arr[i] == 0){
            for(int j = i * i; j <= n; j += i){
                arr[j] = 1;
            }
        }
    }

    cout << "Prime numbers up to " << n << " are: ";
    for(int i = 2; i <= n; i++){
        if(arr[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number up to which you want to print prime numbers: ";
    cin >> n;

    primeNumber(n);

    return 0;
}
