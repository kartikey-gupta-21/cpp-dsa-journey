#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int size,int b){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<=size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    b=0;
    cout<<b;
    
}
int main(){
    int ar[6]={3,5,9,6,7,1};
    int a=99;
    BubbleSort(ar,6,a);
    for(int i=0;i<6;i++){
        cout<<ar[i];
    }
    cout<<endl<<a;
    

}