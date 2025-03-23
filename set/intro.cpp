#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int>m;

    m.insert(1);
    m.insert(3);
    m.insert(5);
    m.insert(2);
    m.insert(1);
    m.insert(4);
    // set ordered value in increasing oreder or no duplicate values can present in set
   
    for (auto it:m){
        cout<<it<<" ";
    }

    cout<<endl;
    cout<<"Lower bound : "<<*(m.lower_bound(4))<<endl;
    cout<<"Upper bound : "<<*(m.upper_bound(2))<<endl;

    // if values doest not exit then its return just above value of lower bound or if not any then 0
    cout<<"Lower bound : "<<*(m.lower_bound(8))<<endl;
    // Correct Way to Handle This
    // Before dereferencing lower_bound(), always check if the iterator is valid:
    auto it = m.lower_bound(8);
    if (it == m.end()) {
        cout << "No valid lower bound found" << endl;
    } else {
        cout << "Lower bound: " << *it << endl;
    }


   // Time complexity
    // count 
    // erase                  takes 0(logn) time
    // find 
    // empty,size,erase

    return 0;
}