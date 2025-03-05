#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            cout<<arr[prev+1]<<" "<<curr<<endl;
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void printArr(vector<int>arr){
    cout<<"Sorted arr is : "; 
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    vector<int>arr{3,2,5,8,4,1,7,6};
    insertionSort(arr);
    //printArr(arr);
    return 0;
}