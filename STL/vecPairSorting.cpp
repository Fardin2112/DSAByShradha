#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2){
    if (p1.second < p2.second) return true;
    else return false;
}

bool comparator2(pair<int,int> p1, pair<int,int> p2){
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    if (p1.first < p2.first) return true;
    else return false;
}

int main(){

    vector<pair<int,int>>nums = {{2,3},{3,1},{6,3},{7,6},{8,3},{5,1}};

    sort(nums.begin(),nums.end());

    for (auto p : nums){
        cout<< p.first << " "<<p.second<<endl;
    }
    // its sorted in based of first value what if you want in based of second value
    // we made custom comprator
    cout<<"After sorting based on second value"<<endl;
    sort(nums.begin(),nums.end(),comparator);
    for (auto p : nums){
        cout<< p.first << " "<<p.second<<endl;
    }

    // now we want if seond value is same then after sort on the based on first value
    cout<<"After sorting based on second value or if second value same then after sort first value"<<endl;
    sort(nums.begin(),nums.end(),comparator2);
    for (auto p : nums){
        cout<< p.first << " "<<p.second<<endl;
    }


    return 0;
}