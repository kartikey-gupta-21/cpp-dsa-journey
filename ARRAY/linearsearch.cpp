#include<iostream>
using namespace std;
bool linear(int arr[],int t,int s){
    for(int i=0;i<s;i++){
        if(arr[i]==t){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[100];
    int s;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    if(linear(arr,target,s)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}