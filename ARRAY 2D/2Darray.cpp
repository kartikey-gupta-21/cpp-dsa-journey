#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[][4],int n,int key){ //we give the column size as 4 because we have to give the column size in the function parameter
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    //decleration of 2D array
    int ar[3][4];

    //input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
                cin>>ar[i][j];                       
        }
    }

    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
                cout<<ar[i][j]<<" ";                       
        }
        cout<<endl;
    }

    //linear search
    int target;
    cin>>target;
    if(linearsearch(ar,3,target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    //row wise sum
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=ar[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is "<<sum<<endl;
    }
    //column wise sum
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=ar[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is "<<sum<<endl;
    }

    //largest row sum
    int largest=INT_MIN;     //set INT_MIN when finding largest number in array and vice versa for smallest number in array
    int index=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=ar[i][j];
        }
        if(sum>largest){
            largest=sum;
            index=i+1;
        }
    }
    cout<<"Largest row sum is "<<largest<<" at row "<<index<<endl;
}