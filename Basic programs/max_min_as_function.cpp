#include <iostream>
using namespace std;
int getmax(int a[],int n){
    int max= 0;
    for (int i = 0; i <n; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        /* code */
    }
    return max;
    
}
int getmin(int a[],int n){
    int min5;
    for (int i = 0; i <n; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
        /* code */
    }
    return min;
    
}
int main(){
    int n;
    cin >> n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    cout<<"max="<<getmax(num,n);
    cout<<"min="<<getmin(num,n);
}