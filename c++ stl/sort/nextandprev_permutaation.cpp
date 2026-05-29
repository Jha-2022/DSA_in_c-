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
    
    
    string s = "bca";
    
    prev_permutation(s.begin(), s.end());
    
    next_permutation(s.begin(), s.end());
    

    cout<<s <<endl;
        
    return 0;


}

