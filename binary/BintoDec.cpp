#include<iostream>
using namespace std;


int binToDec(int binNum){

    int decNum = 0 , pow2 = 1;

    while(binNum > 0){

        int rem = binNum % 10;
        binNum = binNum / 10;
        decNum += rem * pow2;
        cout << binNum <<endl;
        pow2 *= 2; 
    }

    return decNum;
}

int main() {

    int binNum = 110;
    cout<<"the decimal value of "<<binNum<<" is: "<<binToDec(binNum);

    return 0;
}