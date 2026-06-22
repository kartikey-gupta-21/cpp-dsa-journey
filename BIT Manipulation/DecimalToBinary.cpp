#include <bits/stdc++.h>
#include <string>
using namespace std;
void tobinary(int n){
    string binary = "";
    while(n!=0){
        if(n%2==0){
            binary=binary+"0";
        }
        else{
            binary=binary+"1";
        }
        n=n/2;
    }
    for(int i=binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
    
}
int main(){
    int n;
    cin>>n;
    tobinary(n);
}