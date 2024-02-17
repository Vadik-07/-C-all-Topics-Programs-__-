#include<iostream>
#include<string>
using namespace std;

int countPath(int start, int end){
    if(start == end){
        return 1;
    }
    if(end < start){
        return 0;
    }
    int count = 0;
    for(int i = 1; i <= 6; i++){
        count += countPath(start + i, end);
    }
    return count;
}

int main(){

    int n;
    cout << "Enter your Number : ";
    cin >> n;

    cout << countPath(0, n) << endl;

    return 0;
}
