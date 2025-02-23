#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>vec,int target){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if (vec[i]+vec[j]== target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){

    vector<int>vec{2,3,7,5,4};
    int target = 0;
    vector<int>ans = pairSum(vec,target);
    cout<<"the index of pair sum is :"<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}