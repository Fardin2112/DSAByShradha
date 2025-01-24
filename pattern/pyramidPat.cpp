#include<iostream>
using namespace std;

int main(){
        int n = 4;

        for( int i=0; i<n; i++){ // outer loop

            for(int j=n-i; j>1; j--){ // space before
                cout<<" ";
            }
            
            for( int j=1; j<=i+1; j++){ // inner loop
                 cout << j ;
            }
            for(int j=i; j > 0; j--){
                cout << j ;
            }
            cout << endl;
        }
    return 0;
}