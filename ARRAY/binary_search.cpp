#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> ar, int size, int key){
    
    int s=0;
    int e=size-1;
    
    while(s<=e){
        int mid=s+(e-s)/2; // instead of (s+e)/2, to avoid overflow
        if(ar[mid]==key){
            return mid+1;
        }
        if(ar[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }                                                             
    }
}
int main(){
    vector<int> ar;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        ar.push_back(element);
    }
    int key;
    cin>>key;      
    int index = binarysearch(ar, n, key);
    if(index!=-1){
        cout<<index<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}