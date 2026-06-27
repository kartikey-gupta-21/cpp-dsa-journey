#include <bits/stdc++.h>
using namespace std;
int main(){
    //sine wave pattern (up to down and down to up ....)
    int row,col;
    cin>>row>>col;
    int ar[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                cin>>ar[i][j];                       
        }
    }
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<ar[j][i]<<" ";                       
            }
            cout<<endl;
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<ar[j][i]<<" ";                       
            }
            cout<<endl;
        }
    }
}