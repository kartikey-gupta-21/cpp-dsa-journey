#include <bits/stdc++.h>
using namespace std;
int sumofd(int n){
    int sum=0;
    int nc=n;
    while(nc!=0){
        int d=nc%10;
        sum+=d;
        nc=nc/10;
    }
    if(sum<10){
        return n;
    }
    else{
        sumofd(sum);
    }
}
int main(){
    cout<<sumofd(1234);
}