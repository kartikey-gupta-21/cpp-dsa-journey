#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
void altswap(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[7]={1,2,3,4,5,6,9};
    altswap(even,7);
    printarr(even,7);
}