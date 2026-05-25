// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;
    //top
    for(int i = 0; i< n ; i++){
        //paces
        for(int j =0; j< n-i-1;j++){
            cout<<" ";
        }
        
        cout<<"*";
        
        if(i != 0){
            //spaces
            for(int j = 0; j<2*i-1;j++){
                cout<<" ";
            }
            
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
    //bottom
    
    for(int i =0; i < n - 1;i++){
        //spaces
        for(int j = 0; j<i+1;j++){
            cout<<" ";
        }
        
        cout<<"*";
        
        if(i != n - 2){
            //spaces
            for(int j = 0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        
        cout<<endl;
    }

    return 0;
}
