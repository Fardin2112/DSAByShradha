#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<string,int>m;

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    // if we used normal map then even after inserting multiple times tv we get only one tv value but here not
   
    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
     // or if we delete one tv then its match with all delete all
     m.erase("tv");
     cout<<"After deleting one tv "<<endl;
     for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"Size of map is : "<<m.size();

    // even if we want to delete only on tv ther eis option
    m.erase(m.find("tv"));
    // by using find we get actual iterator of tv and by erase we delete only one


    return 0;
}