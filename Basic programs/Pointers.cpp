#include <bits/stdc++.h>
using namespace std;    
int main(){
    int num=10;
    //address operator- &
    cout<<"address of num is: "<<&num<<endl;
    int *ptr=&num; //created pointer variable ptr which stores the address of num
    cout<<"Value of a is: "<<*ptr<<endl;
    cout<<"Address of a is: "<<ptr<<endl; 
    cout<<"size of address of pointer is: "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is: "<<sizeof(*ptr)<<endl;
    //never declare a null pointer and dereference it, it will lead to segmentation fault

    //In C++, the size of a pointer is independent of the type of data it points to — it depends only on system architecture (32-bit or 64-bit) and compiler implementation
    //32-bit system → Pointer size is typically 4 bytes
    //64-bit system → Pointer size is typically 8 bytes

    num++;
    cout<<"Value of num after increment is: "<<num<<endl;
    cout<<"Value of *ptr after increment is: "<<ptr<<endl;
    (*ptr)++;
    cout<<"Value of num after increment is: "<<num<<endl;
    cout<<"Value of *ptr after increment is: "<<*ptr<<endl;

    //copy a pointer
    int *ptr2=ptr;
    cout<<"Address of ptr2 is: "<<ptr2<<endl;
    cout<<"Value of ptr2 is: "<<*ptr2<<endl;

    cout<<endl;
    //important concept
    int a=10;
    int *p=&a;
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Address of p is: "<<p<<endl;
    p=p+1; //updating the address of pointer variable p
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Address of p is: "<<p<<endl;


}