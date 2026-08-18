#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    cout<<"address of firest element of array is: "<<arr<<endl;
    cout<<"address of firest element of array is: "<<&arr[0]<<endl;

    cout<<*arr<<endl; //dereferencing the address of first element of array
    cout<<*arr +1<<endl; //dereferencing the address of first element of array and add one to it
    cout<<*(arr+1)<<endl; //dereferencing the address of second element of array
    cout<<*(arr+1) +1<<endl; //dereferencing the address of second element of array and add one to it   
      
   // arr[i] = *arr + i;  OR i[arr] = *(arr + i);  //both are same
   cout<<"Value at third index value="<<3[arr]<<endl;
    
   int *ptr=arr; //created pointer variable ptr which stores the address of first element of array
   cout<<"Size of array is: "<<sizeof(arr)<<endl;
   cout<<"Value of first element: "<<*ptr<<endl;
   cout<<"Size of first element: "<<sizeof(*ptr)<<endl;
   cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;

   int *ptr2=&arr[0]; //created pointer variable ptr2 which stores the address of first element of array
   ptr2++; // u cant do the same to arr when it is used as a pointer, because it is a constant pointer
   cout<<"Value of second element: "<<*ptr2<<endl;
}