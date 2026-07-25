#include <bits/stdc++.h>
using namespace std;
int main(){
    int p, n=0;
    cin>>p;
    for(int i=2;i<p;i++){
        if(p%i==0){
            n++;
            break;
        }
    }
    if(n!=0){
            cout<<"NOT PRIME";
        }
    else{
        cout<<"PRIME";
    }
}