# include<iostream>
# include<climits>
using namespace std;
int main(){

    int n;
    cout<<"Enter your Number of Words : ";
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<"Enter Your Sentence : ";
    cin.getline(arr, n+1);
    cin.ignore();

    int i = 0,count = 0;
    int mx = INT_MIN;
    while(arr[i] != '\0'){
        if(arr[i] != ' '){
            count++;
        }
        else{
            mx = max(count,mx);
            count = 0;
        }
        i++;
    }

    mx = max(count,mx);
    cout<<mx;

    return 0;
}