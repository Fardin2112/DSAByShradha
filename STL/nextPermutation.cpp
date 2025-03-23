#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string s = "bac";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;

    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
}