#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main (){

    vector<int>vec{1,8,-1,6,-4,1,-3};
    int n = vec.size();
    int maxSum = INT_MIN;

    // by brute force n^2
    for(int st = 0; st<n; st++){
        int currentSum = 0;
        for (int end=st; end<n; end++){
            currentSum += vec[end];
            maxSum = max(currentSum,maxSum);
        }
    }
    cout<<"max sum 1 : "<<maxSum<<endl;
    // by kadane algo
    int currentSum = 0;
    maxSum = 0;
    for (int i=0; i<n; i++){
        currentSum += vec[i];
        maxSum = max(currentSum,maxSum);
        if (currentSum < 0){
            currentSum = 0;
        }
    }
    cout<<"maxSum2 : "<<maxSum;
    return 0;
}