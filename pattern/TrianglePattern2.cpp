#include<iostream>
using namespace std;

int main(){
        int n = 4;

        for( int i=1; i<=n; i++){ // outer loop
            
            for( int j=1; j<=i; j++){ // inner loop
                 cout << i <<" ";
            }
            cout << endl;
        }
    return 0;
}