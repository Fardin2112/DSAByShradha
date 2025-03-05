#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        int min_index = i;
        for (int j=i+1;j<n;j++){
            if (arr[j] < arr[min_index]){
               min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

void printArr (vector<int>arr){
    cout<<"Sorted arr is : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr{2,4,1,6,8};
    selectionSort(arr);
    printArr(arr);
    return 0;
}