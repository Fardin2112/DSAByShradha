#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int>m;

    m.emplace("tv",100);
    m.emplace("ipad",100);
    m.emplace("phone",100);
    m.insert({"laptop",100});
    // if we used normal map then even after inserting multiple times tv we get only one tv value but here not
   
    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }


    // difference between map or unordered map is

    // 1 -> map[self balance tree]
    
    // inser   |
    // erase   | takes 0(logn) time
    // cout    |

      // 2 -> unoredered_map[self balance tree]
    
    // inser   |
    // erase   | takes 0(1) time   rare case 0(n) time if collision occur
    // cout    |

    return 0;
}