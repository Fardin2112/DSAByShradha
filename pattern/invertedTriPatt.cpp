#include<iostream>
using namespace std;

int main(){
        int n = 4;

        for( int i=0; i<n; i++){ // outer loop
            
            for ( int k=0; k<i;k++){ // for space
                cout<<" ";
            }
            for( int j=0; j<n-i; j++){ // inner loop
                 cout << i+1;
            }
            cout << endl;
        }
    return 0;
}