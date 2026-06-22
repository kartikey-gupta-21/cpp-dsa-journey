#include <bits/stdc++.h>
using namespace std;
int main(){
    char ar[50];
    cin>>ar;         //reads until first space or null character is encountered
    cout<<ar;        //prints until first space or null characater is encountered
    
    //to find legth of the string
    int count=0;
    for(int i=0;ar[i]!='\0';i++){
        count++;
    }
    cout<<count;

    char arr[5]={'a','b','c','d','\0'};  //character array is used to store a string in c
    cout<<arr;        //prints until first space or null characater is encountered

    string str="abcd";  //string is a class in c++ which is used to store and manipulate strings 
    // no need to add null character at the end of the string as it is automatically added by the compiler 
    cout<<str;       //prints the string  

    

}