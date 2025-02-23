#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>pairSum(vector<int>vec,int target){
    int n = vec.size();
    int i = 0, j = n-1;
    while( i < j){
        if ( vec[i] + vec[j] > target ){
            j--;
        }
        else if (vec[i] + vec[j] <target){
            i++;
        }
        else {
            return {i,j};
        }
    }

    return {-1,-1};
}

int main(){

    vector<int>vec{2,3,7,5,4};
    // now vector is sorted;
    sort(vec.begin(),vec.end());
    int target =9;
    vector<int>ans = pairSum(vec,target);
    cout<<"the index of pair sum is :"<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}