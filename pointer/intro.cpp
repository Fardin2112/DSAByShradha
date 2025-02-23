#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a = 10;

    // pointer
    int* ptr = &a;

    cout<<"value of ptr1 :"<<ptr<<endl;     // value of ptr1
    cout<<"address of a :"<<&a<<endl;       // address of a
    cout<<"address of ptr1 :"<<&ptr<<endl;  // address of ptr1

    int** parPtr = &ptr;

    cout<<"pointer of pointer value :"<<parPtr<<endl;

    return 0;
}