#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=10,b=20;
    a=a^b;
    b=a^b;
    a=a^b;  
    cout<<"After swapping a="<<a<<" b="<<b;
}