#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // divide the vector in such way half left side is in increasing order and half right side in decreasing order
    vector<int>nums = {23,2,87,56,78,65};
    int n = nums.size() / 2;
    sort(nums.begin(),nums.begin()+n);
    sort(nums.begin()+n, nums.end(), greater<int>()); // Sort in descending order
    for (auto num : nums){
        cout<< num <<" ";
    }

    return 0;
}