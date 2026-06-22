#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr) {
    for(int i=1;i<arr.size();i++){
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                //arr[j]=temp;      can write here too
            }
            else{
                break;
            }
            arr[j]=temp;
        }
    }
    
}
int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    insertionSort(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}