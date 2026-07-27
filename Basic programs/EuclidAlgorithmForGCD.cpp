#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a!=b){
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter two numbers to find GCD: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
}