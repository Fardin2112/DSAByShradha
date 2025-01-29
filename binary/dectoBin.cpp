#include<iostream>
using namespace std;

int binToDec(int decNum) {

    int binNum = 0;
    int pow = 1;

    while(decNum != 0){
        int rem = 0;
        rem = decNum % 2;
        decNum = decNum / 2;

        binNum += rem * pow;
        pow *= 10;  
    }
    return binNum;
}


int main (){

    int decNum = 4;
    cout<<"Binary Num of Dec value "<<decNum<<" is :"<<binToDec(decNum);

    return 0;
}