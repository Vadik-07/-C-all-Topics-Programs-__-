# include<iostream>
using namespace std;

void increment(int *c){
    (*c)++;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int c = 10;
    increment(&c);
    cout<<c<<endl;

    int a = 4, b = 3;

    // it can also be done by this

    // int *aptr = &a;
    // int *bptr = &b;
    // swap(aptr,bptr);

    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}