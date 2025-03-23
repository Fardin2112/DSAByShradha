#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums = {2,7,8,6,5,4,3};

     // Sort the vector before binary_search
     sort(nums.begin(), nums.end());

    cout << binary_search(nums.begin(), nums.end(), 7)<<endl;;
    return 0;
}