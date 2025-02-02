#include<iostream>
using namespace std;

int main(){
    int arr[] = {34,45,44,33,21,67};

    // each element occupy 4 bytes(32bits) or it could store which represent -2,147,483,648 to 2,147,483647 (signed)
    // 0 to (4,294,967,295) 
    cout<<"size of array : "<<sizeof(arr)<<endl;
    cout<<"arr of size :"<<sizeof(arr)/sizeof(int);

    return 0;
}