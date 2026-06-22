#include <bits/stdc++.h>
using namespace std;
void todecimal(string binary){
    int decimal = 0;
    int base = 1;
    int length = binary.length();
    for(int i=length-1;i>=0;i--){
        if(binary[i]=='1'){
            decimal += base;
        }
        base = base * 2;
    }
    cout<<decimal;
}
int main(){
    int n;
    string binary;
    cin>>binary;
    todecimal(binary);
}