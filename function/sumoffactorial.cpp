#include<iostream>
using namespace std;

int sumOfFactorial (int n){
    int sum = 1;

    for(int i=1; i<=n; i++){
        sum *= i;
    }

    return sum;
}

int main (){

    int n = 5;
    cout<<sumOfFactorial(n);

    return 0;
}