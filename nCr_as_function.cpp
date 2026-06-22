#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    float ncr=factorial(n)/(factorial(r)*(factorial(n-r)));
    cout<<ncr;
}
