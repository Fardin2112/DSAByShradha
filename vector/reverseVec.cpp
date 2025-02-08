#include<iostream>
#include<vector>
using namespace std;

vector<int>reverseVec(vector<int>& vec){
    int n = vec.size();
    int i = 0;
    int j = n-1;
    while( i < j ) {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
        
    } 
    return vec;
}

int main(){

    vector<int>vec = {1,2,3,4,5,6,7};
    for(int i: vec){
        cout<< i << " ";
    }
    cout<<endl;
    reverseVec(vec);
    for(int i: vec){
        cout<< i << " ";
    }


    return 0;
}