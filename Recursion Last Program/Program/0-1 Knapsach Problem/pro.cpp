#include<iostream>
using namespace std;

int knapsach(int value[], int weight[], int item, int maxWeightOfKnapsach){

    if( item==0 || maxWeightOfKnapsach==0){
        return 0;
    }
    if(weight[item-1] > maxWeightOfKnapsach){
        return knapsach(value,weight,item-1,maxWeightOfKnapsach);
    }

    return max(knapsach(value,weight,item-1,maxWeightOfKnapsach-weight[item-1])+value[item-1],knapsach(value,weight,item-1,maxWeightOfKnapsach));
}

int main(){

    int item;
    cout<<"Enter the Number of Item: ";
    cin>>item;
    int weight[item];
    cout<<"Enter the Weight of item "<<endl;
    for(int i=0; i<item; i++){
        cout<<"Enter your "<<i+1<<"  item : ";
        cin>>weight[i];
    }
    int value[item];
    cout<<"Enter the Value of item "<<endl;
    for(int i=0; i<item; i++){
        cout<<"Enter your "<<i+1<<"  item value : ";
        cin>>value[i];
    }
    int maxWeightOfKnapsach;
    cout<<"Enter the Weight Limit of Knapsach: ";
    cin>>maxWeightOfKnapsach;

    cout<<endl;
    cout<<"Maximum value that can be obtained: " <<knapsach(value,weight,item,maxWeightOfKnapsach)<<endl;   
    cout<<endl;

    return 0;
}