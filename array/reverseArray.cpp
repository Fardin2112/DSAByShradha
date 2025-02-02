#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){

    int i=0;
    int j= size-1;

    // swapping element until i and j meet
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main() {

    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr,size);

    cout<<"reverse array :";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}