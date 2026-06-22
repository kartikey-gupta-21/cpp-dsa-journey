#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
void fibonacci(int n){
    int a=1;
    cout<<a;
    fibonacci(n-1);
}
int ab(int a,int b){
}
int main(){
    cout<<factorial(5);
    char ar[50];
    cin.getline(ar,50);
    
    char arc[50];
    strcpy(arc,ar);
    for(int i=0;arc[i]!='\0';i++){
        cout<<arc[i];
    }
    string s;
    getline(cin,s);
    cout<<s;
}