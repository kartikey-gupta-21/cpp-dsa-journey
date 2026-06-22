#include <bits/stdc++.h>
using namespace std;
void check_the_ith_bit_is_set_or_not(){
    int n,i;
    cin>>n>>i;
    if(n&(1<<i)){
        cout<<"SET";
    }
    else{
        cout<<"NOT SET";
    }   
}
void set_the_ith_bit(){
    int n,i;
    cin>>n>>i;
    n=n|(1<<i);
    cout<<n;
}
void clear_the_ith_bit(){
    int n,i;
    cin>>n>>i;
    n=n&(~(1<<i));
    cout<<n;
}
void toggle_the_ith_bit(){
    int n,i;
    cin>>n>>i;
    n=n^(i<<1);
    cout<<n;
}
void remove_last_set_bit(){
    int n;
    cin>>n;
    n=n&(n-1);
    cout<<n;
}
int main(){
    check_the_ith_bit_is_set_or_not();
    set_the_ith_bit();
    clear_the_ith_bit();
    toggle_the_ith_bit();
    remove_last_set_bit();
}
