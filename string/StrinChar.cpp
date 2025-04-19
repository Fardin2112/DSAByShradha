#include<iostream>
#include<string>
#include<cstring>   // for strlen()
using namespace std;

int main(){

    char str[100];

    cout<<"enter char array";
    cin.getline(str,100, '$');

    // int n = strlen(str);
    // for (int i=0;i<n;i++){
    //     cout<<str[i]<<" ";
    // }
    for (int i=0; i<str[i] != '\0'; i++){
        cout << str[i]<<endl;
    }

    cout<<"output : "<< str << endl;

    return 0;
}

// cin.getline(str,len,delim?)
// 1 str is name of string where you want to store input data
// 2 len  means length of input that taken by cin 
// 3 delim means the char u choose if comes input taken by cin end there after value not save

//Note 
// str[12] 
// save only 11 char last 1 size used to end string