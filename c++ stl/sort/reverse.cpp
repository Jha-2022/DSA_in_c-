// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;




int main() {
    
    vector <int> vec = {1,2,3,4,5};
    reverse(vec.begin(), vec.end());
    
    for(auto val : vec){  
        cout << val << " ";
    }
    
    cout<<endl;
    
    reverse(vec.begin() + 1, vec.begin() + 3);
    
    
    for(auto val : vec){  
        cout << val << " ";
    }
    
    
    
    cout<<endl;
    
    
    
    return 0;
}
