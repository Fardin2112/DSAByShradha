#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int* ptr = &a;

    cout<<"value of ptr"<<ptr<<endl;
    ptr++; // its increase bits by 4 if its integer value
    cout<<"after ptr++ "<<ptr<<endl; 
    ptr = ptr+1; // its also increase bits by 4 , adding 1 does not mean we add 1 in adddres we add by 1 more value of int
    cout<<"value of ptr after adding 1 "<<ptr<<endl;

    int arr[] = {1,2,3,4};
    cout<< *(arr+1)<<endl; // arr pointitng intial value which is address of 1 , and we add 1 mean add 4 bits
                           //  which point next value of arr

    // arthmetic operation
    int* pointer; // 100
    int* pointer2 = pointer + 3; // 11c
    cout<<"sub of pointer address "<< pointer2 - pointer<<endl;
    cout<<( pointer < pointer2) <<endl;
    return 0;
}