#include <iostream>
#include <vector>
using namespace std;

void changeA1(int a){ // pass by value
    a = 15;
}

void changeA2(int &a){ // pass by reference
    a = 20;
}

void changeB(int* ptr){ // pass by reference using pointer
    *ptr = 15;
}

int main(){

    int a = 10;
    changeA1(a);
    cout<<"when we change value by pass by rerference : "<<a<<endl;
    changeA2(a);
    cout<<"After calling pass by reference : "<<a<<endl;

    int b = 5;
    changeB(&b);
    cout<<"changing value by using pass by pointer "<<b<<endl;


    return 0;
}