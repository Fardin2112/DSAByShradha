#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans(nums.size(),1);
    for (int i=0; i<nums.size(); i++){
        int Prod_Array = 1;
        for (int j=0; j<nums.size(); j++){
            if ( i == j){
                continue;
            } else {
                Prod_Array *= nums[j];
            }
        }
        ans[i] = Prod_Array;
    }
    return ans;
}

int main (){

    vector<int>Array = {1,2,3,4};
   vector<int>ans = productExceptSelf(Array);
    for (int nums:ans){
        cout<<nums<<" ";
    }

    return 0;
}