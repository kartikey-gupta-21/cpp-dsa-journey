#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    int choice;
    cin>>a>>b>>choice;
    switch(choice){
        case 1:
            cout<<
            a+b<<endl;
            break;
        case 2:
            cout<<a-b<<endl;
            break;
        case 3:
            cout<<a*b<<endl;
            break;
        case 4:cout<<a/b<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}