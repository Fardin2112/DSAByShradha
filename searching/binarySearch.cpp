#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>vec, int target){
    int n = vec.size();
    int left = 0;
    int right = n-1;

    while(left <= right){ // itterative
        int mid = left + (right - left)/2;
        if( vec[mid] < target ){
            left = mid +1;
        }
        else if( vec[mid] > target){
            right = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}

int recBinarySearch(int left,int right,vector<int>&vec,int target){
    if (left <= right){
        int mid = left + (right-left)/2;
        if (vec[mid] < target){
            return recBinarySearch(mid+1,right,vec,target);
        }
        else if (vec[mid] > target){
            return recBinarySearch(left,mid-1,vec,target);
        } else {
            return mid;
        }
    }
    return -1;
}

int main (){

    vector<int>vec = {1,2,3,4,5,6,7};
    int target = 8;
    cout<<"the index of target is : "<<binarySearch(vec,target)<<endl;
    int left = 0,right = vec.size()-1;
    cout<<"the index of target using recursive is : "<<recBinarySearch(left,right,vec,target);
    return 0;
}