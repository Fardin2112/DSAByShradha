#include<iostream>
using namespace std;

int sumOfdigits (int n){
    int sum = 0;
    while (n !=0){
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main (){

    int num = 1425;
    cout<<sumOfdigits(num);

    return 0;
}