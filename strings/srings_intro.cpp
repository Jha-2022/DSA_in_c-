#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // Write C++ code here
    
    string str = "hello world";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    
    string str1 = "Buggati ";
    string str2 = "verrone";
    
    string str3 = str1 + str2;
    cout<<str3<<endl;
    
    string str4;
    getline(cin, str4);
    cout<<str4<<endl;
    
    
    //loops in a string
    for(int i = 0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    
    cout<<endl;
    // or we can even use a for each loop instad
    
    for(char ch : str){
        cout<<ch<<" ";
    }
    
    cout<< endl;
    
    
    //reverse a string
    
    int st = 0 , e = str.length()-1;
    
    while(st<e){
        swap(str[st], str[e]);
        st++;
        e--;    
    }
    
    for(char ch : str){
        cout<<ch;
    }
    
    cout<<endl;
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}
