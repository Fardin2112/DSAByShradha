#include<iostream>
#include<vector>
using namespace std;

int main (){
    // vector -> dynamic / resize
    // vector intialization
    vector<int>arr1 = {1,2,3,4,5,6};
    vector<int>arr2(3,10); // we create 3 size of vector where every value is equal to 10
    vector<int>arr3(arr1); 

    for (int val : arr3){
        cout<<val<<" ";
    }
    cout<<endl;
    
    cout<<"Size of arr1 is : "<<arr1.size()<<endl; // size & capacity
    arr1.push_back(7); // adding element in arr 1
    arr2.pop_back(); // removing last element from arr2
    arr3.emplace_back(8); // this also used to push value in vec
    cout<<"value of index at 2 is :"<<arr1[2]<<" "<<arr1.at(2)<<endl;

    // above all STL take O(1) time complexity

    // erase
    // insert       -> {this all take O(n) time complexity to perform operation}
    // clear 
    // empty

    arr1.erase(arr1.begin());  // arr1.begin is iterator
    arr1.erase(arr1.begin()+2); // using this we can delete at index 2
    // vec.erase(start,end) if we want to delete more than 1 element in sequence (start include but end not in index of delete)
    // Note its change size but not capacity
    arr1.insert(arr1.begin()+2,-3); // if we want to add element in any index
    arr1.clear(); // delete all elements

    // clear delete elements but not internal capacity
    cout<<"size of arr1 : "<<arr1.size()<<endl;
    cout<<"capcity of arr1 : "<<arr1.capacity()<<endl;
    cout<<"is empty : "<<arr1.empty()<<endl;

    cout<<"vec begin :"<< *( arr3.begin() )<<endl; // its point first value
    cout<<"vec end   :"<< *( arr3.end()-1 )<<endl; // its point first value

    // using iterator looping
    vector<int>::iterator it;
    for(it = arr3.begin(); it!=arr3.end(); it++){
        cout<< *(it) <<" ";
    }
    cout<<endl;

    // reverse
    for (auto it = arr3.rbegin(); it!=arr3.rend(); it++){
        cout<< *(it) <<" ";
    }
    cout<<endl;
    

    return 0;
}