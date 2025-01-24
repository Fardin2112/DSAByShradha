#include<iostream>
using namespace std;

int main(){
        int n = 4;
        char ch = 'A';

        for( int i=1; i<=n; i++){ // outer loop
            
            for( char j=ch; j>='A'; j--){ // inner loop
                 cout << j <<" ";
            }
            ch = ch + 1;
            cout << endl;
        }
    return 0;
}