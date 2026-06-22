#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr) {
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    selectionSort(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}