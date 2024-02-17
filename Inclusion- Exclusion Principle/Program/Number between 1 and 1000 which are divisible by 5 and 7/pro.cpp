# include<iostream>
using namespace std;

int divisible(int a, int n, int m){
    int c1 = a/n;
    int c2 = a/m;
    int c3 = a/(n*m);

    return c1+c2-c3;
}

int main(){

    int a,n,m;
    cin>>a>>n>>m;
    cout<<divisible(a,n,m)<<endl;

    return 0;
}