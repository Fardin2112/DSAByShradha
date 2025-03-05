#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n = arr.size();
   
    for(int i=0; i<n; i++){
        bool isSwap = false;

        for (int j=0;j<n-i;j++) {
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if (!isSwap){ // arr is already sorted
            return;
        }
    }
}

void PrintArr(vector<int>arr){
    cout<<"Sorted arr is : ";
    for (int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr{2,4,1,5,6};
    bubbleSort(arr);
    PrintArr(arr);
    return 0;
}

