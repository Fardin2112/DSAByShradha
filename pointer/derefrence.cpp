#include <iostream>
using namespace std;

int main (){

    int a = 10;
    
    int* ptr = &a;

    // * derefrence opreator means value at address
    cout<<*(&a) <<endl;  // ex here we print value of address a
    cout<<"value in Address "<< ptr <<" of pointer ptr is "<<*ptr<<endl;    // same goes here
    cout<<*(&ptr)<<" "<<ptr<<endl;

    // ** double derefrencing
    int** parPtr = &ptr;
    cout<<"Value of pointer "<<parPtr<< " again value of this address " <<ptr<<" is : "<<**parPtr<<endl;
    cout<<a<<"-"<<&a<<" , "<<ptr<<"-"<<&ptr<<" , "<<parPtr<<"-"<<&parPtr<<endl;

    return 0;
}