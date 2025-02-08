#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec;
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);

    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"vector size : "<<vec.size()<<endl; // for vector size
    cout<<"vector capacity : "<<vec.capacity()<<endl; // for vector capacity how much stroge acuired by vector

    return 0;
}